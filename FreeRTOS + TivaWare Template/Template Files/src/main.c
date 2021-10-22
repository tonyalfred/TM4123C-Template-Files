/******************************************************************************
 *
 * File Name:   main.c
 *
 * Description: main source file to initialize and start the project
 *
 * Date:        10/2/2020
 *
 ******************************************************************************/

#include <Template Files/inc/common_includes.h>
#include <Template Files/inc/debug.h>
#include "inc/hw_uart.h"

/* Tiva-Ware Drivers Includes */
#include "driverlib/interrupt.h"
#include "driverlib/uart.h"
#include "driverlib/usb.h"
#include "usblib/usblib.h"
#include "usblib/usbcdc.h"
#include "usblib/usb-ids.h"
#include "usblib/device/usbdevice.h"
#include "usblib/device/usbdcdc.h"
#include "utils/ustdlib.h"

/* Configurations Includes */

/* Queues handles declarations */

int main(void)
{
    /* Enable lazy stacking for interrupt handlers. This allows floating-point
     * instructions to be used within interrupt handlers, but at the expense of
     * extra stack usage. */
    MAP_FPULazyStackingEnable();
    MAP_FPUEnable();

    MAP_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN); /* Set the clocking to run at 80 MHz from the PLL. */

    MAP_IntMasterEnable();                                                                      /* Enable Global Interrupt-bit */

    /* Creating the Queues and storing their addresses in their handles */

    /* Initializing System's modules */
    UART0_init();

        /* Prototype for xTaskCreate:
        *
        *  BaseType_t xTaskCreate( TaskFunction_t pvTaskCode,
        *                          const char * const pcName,
        *                          uint16_t usStackDepth,
        *                          void *pvParameters,
        *                          UBaseType_t uxPriority,
        *                          TaskHandle_t *pvCreatedTask);
        */

    vTaskStartScheduler();  /* Run the Kernel's Scheduler */

    /* UNREACHABLE CODE */
    while(1);

}
