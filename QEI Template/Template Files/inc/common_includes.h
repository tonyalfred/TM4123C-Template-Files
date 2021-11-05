/*Standard*/
#include <stdint.h>
#include <stdbool.h>

/* Tiva-Ware Library Macros/Defines Includes */
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"                  // Macros defining the memory map of the Tiva C Series device
#include "inc/hw_gpio.h"                    // Defines Macros for GPIO hardware
#include "inc/hw_sysctl.h"
#include "inc/hw_types.h"                   // Defines common types and macros
#include "inc/hw_uart.h"

/* Tiva-Ware Library Drivers Includes */
#include "driverlib/debug.h"                // Macros for assisting debug of the driver library
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"                 // Defines and macros for GPIO API of DriverLib
#include "driverlib/pin_map.h"              // Mapping of peripherals to pins for all parts
#include "driverlib/sysctl.h"               // Defines and macros for System Control API of DriverLib
#include "driverlib/rom.h"                  // Defines and macros for ROM API of driverLi
#include "driverlib/rom_map.h"

/* Extra Header File Includes apart from the original common_includes.h that we will need to add in the car code when integrating */
#include "inc/hw_qei.h"                     // Macros used when accessing the QEI hardware
#include "driverlib/interrupt.h"            // Defines and macros for NVIC Controller API of DriverLib
#include "driverlib/qei.h"                  // Prototypes for the Quadrature Encoder Driver
