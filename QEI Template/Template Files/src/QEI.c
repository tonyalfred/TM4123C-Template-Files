/* -----------------------    Source Code Header File   --------------------- */
#include "Template Files/inc/QEI.h"

/* -----------------------     Function Definitions     --------------------- */
/******************************************************************************
 *
 * Function Name: QEI1_Init
 *
 * Description: Function that initializes the first module of the Quadrature Encoder Interface (QEI).
 * Arguments:   Void
 * Return:      Void
 *
 *****************************************************************************/

void QEI1_Init (void){
    // Enable the clock for peripherals PortC and QEI1
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_QEI1);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);

    // Configure the PC5, PC6 for QEI signals
    ROM_GPIOPinTypeQEI(GPIO_PORTC_BASE, GPIO_PIN_5 | GPIO_PIN_6);
    ROM_GPIOPinConfigure(GPIO_PC5_PHA1);
    ROM_GPIOPinConfigure(GPIO_PC6_PHB1);

    // Configure the QEI1 to increment for both PhA and PhB for quadrature input with "QEI1_PPR" PPR
    ROM_QEIConfigure(QEI1_BASE, QEI_CONFIG_CAPTURE_A | QEI_CONFIG_NO_RESET | QEI_CONFIG_QUADRATURE | QEI_CONFIG_NO_SWAP , QEI1_PPR);

    /* Configure the QEI1 for Velocity Calculation, Pre-divide by 1 at "VEL_INT_FREQ" Hz
     * The last parameter here determines the frequency at which the Velocity timer expires and fires an interrupt. */
    ROM_QEIVelocityConfigure(QEI1_BASE, QEI_VELDIV_1, ROM_SysCtlClockGet() / VEL_INT_FREQ);
    ROM_QEIVelocityEnable(QEI1_BASE);

    // Enable the Interrupts for Velocity Timer Expiration of QEI1
    void (*QEI1IntHandler_ptr)(void) = &QEI1IntHandler;
    QEIIntRegister(QEI1_BASE, *QEI1IntHandler_ptr);
    ROM_QEIIntEnable(QEI1_BASE, QEI_INTTIMER);

    // Initializing the variable that represents total distance made by the Wheel Encoder is needed to be done before using the QEI.
    Total_distance = 0;

    // Enable the QEI1
    ROM_QEIEnable(QEI1_BASE);
}

/******************************************************************************
 *
 * Function Name: QEI1IntHandler
 * Description: Interrupt Service Routine for the Interrupt that arises from the
 *              Expiration of the Velocity Timer that is present in the QEI1 hardware.
 * Arguments:   Void
 * Return:      Void
 *
 *****************************************************************************/

void QEI1IntHandler(void){
    // Clear the Interrupt that is generated
    ROM_QEIIntClear(QEI1_BASE, ROM_QEIIntStatus(QEI1_BASE, true));

    // Calculate the Number of Quadrature Ticks (Number of Encoder Pulses) in "1 / VEL_INT_FREQ" time period
    Pulses_Per_Period = ROM_QEIVelocityGet(QEI1_BASE);

    // Update the position reading of the encoder
    // ui32Qei1Pos = ROM_QEIPositionGet(QEI1_BASE);

    // Update the direction reading of the encoder
    // i32Qei1Dir = ROM_QEIDirectionGet(QEI1_BASE);

    // Calculate the velocity in RPM
    // ui16Qei1Rpm = ui32Qei1Vel * VEL_INT_FREQ * 60 / QEI1_PPR;

    /*
     * Calculate the Real Velocity of Vehicle in m/s and km/hr, by dividing the total number of pulses within the timer period (ui32QEI1Vel)
     * by the number of pulses that create a full revolution (QEI1_PPR) (Value is encoder specific, and is equal to 32 pulses), in order to
     * find the number of revolutions spanned and then multiply by Circumference of Wheel, in order to find the total distance covered,
     * and then dividing by the time period that we gave to the Velocity Timer, but, here we will do that by multiplying with the frequency
     * of The Velocity Timer instead. (VEL_INT_FREQ)
     */

    Distance_per_period   =  ((float)(Pulses_Per_Period * Wheel_Circumference)/QEI1_PPR);
    Total_distance = Total_distance + Distance_per_period;
    Velocity_meter_per_second   = (Distance_per_period * VEL_INT_FREQ);

//  Velocity_meter_per_second   = ((float)(ui32QEI1Vel * WheelCircumfrence * VEL_INT_FREQ) /QEI1_PPR);
//  Velocity_kilometer_per_hour = Velocity_meter_per_second * 3.6;

    UART_sendString (UART0_BASE, "Total Distance in meters:  ");
    UART_sendNumber (Total_distance);
    UART_sendString (UART0_BASE, "\n\r Velocity in meter/second:  ");
    UART_sendNumber (Velocity_meter_per_second);
    UART_sendString (UART0_BASE, "\n\r Velocity in kilometer/hour:  ");
    UART_sendNumber ((Velocity_meter_per_second * 3.6));
    UART_sendString (UART0_BASE, "---------------------------- \n\r");
}
