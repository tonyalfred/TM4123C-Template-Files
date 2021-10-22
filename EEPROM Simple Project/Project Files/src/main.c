/******************************************************************************
 *
 * File Name:   main.c
 *
 * Description: main source file to initialize and start the project
 *
 * Date:        10/2/2020
 *
 ******************************************************************************/

#include <Project Files/inc/common_includes.h>
#include <Project Files/inc/debug.h>
#include "inc/hw_uart.h"
#include "inc/hw_eeprom.h"

/* Tiva-Ware Drivers Includes */
#include "driverlib/interrupt.h"
#include "driverlib/usb.h"
#include "driverlib/eeprom.h"
#include "usblib/usblib.h"
#include "usblib/usbcdc.h"
#include "usblib/usb-ids.h"
#include "usblib/device/usbdevice.h"
#include "usblib/device/usbdcdc.h"
#include "utils/ustdlib.h"


/* Configurations Includes */

/* Global Variables. */
uint8_t ui32EEPROMInit;
uint8_t Read  [2];
uint8_t Write [2];

int main(void)
{
    /* Enable lazy stacking for interrupt handlers. This allows floating-point
     * instructions to be used within interrupt handlers, but at the expense of
     * extra stack usage. */
    MAP_FPULazyStackingEnable();
    MAP_FPUEnable();

    /* Set the clocking to run at 80 MHz from the PLL. */
    MAP_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

    /* Enable Global Interrupt-bit */
    MAP_IntMasterEnable();

    /* Initializing System's modules */
    UART0_init();

    /* Enable the EEPROM Module. */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_EEPROM0);

    /* Wait for the EEPROM Module to be ready. */
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_EEPROM0)) {}

    /* Wait for the EEPROM Initialization to complete. */
    ui32EEPROMInit = EEPROMInit();

    /* Check if the EEPROM Initialization returned an error and inform the application. */
    if(ui32EEPROMInit != EEPROM_INIT_OK)
    {
        while(1)
        {
            UART_sendString (UART0_BASE, "Error with regard to EEPROM Initialization. \n\r");
        }
    }

    /* UNREACHABLE CODE */
    while(1)
    {
        /* Program some data into the EEPROM at address 0x400. */
        UART_receiveString(UART0_BASE, Write);
        EEPROMProgram((uint32_t *) Write, 0x400, sizeof(Write));

        /* Read it back and Write back to the PuTTy. */
        EEPROMRead((uint32_t *) Read, 0x400, sizeof(Read));
        UART_sendString (UART0_BASE, Read);
    }
}
