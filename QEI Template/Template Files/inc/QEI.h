#include "Template Files/inc/common_includes.h"
#include "Template Files/inc/common_macros.h"
#include "Template Files/inc/debug.h"

// Comment this line if Terminal debugging (Putty) isn't required
#define DEBUG_QEI

#define VEL_INT_FREQ         0.2f        // Macro to store the Interrupt frequency of QEI1. will be changed according to need of PID.
#define QEI1_PPR             32          // Macro to store the PPR of the QEI1.
#define Wheel_Circumference  1.7522787f  // As car's diameter was measured manually to be equal to ... meters,
                                         // hence, circumference = 2*PI*r = PI*d = ...

/* -----------------------      Global Variables        --------------------- */
// volatile int32_t   i32QEI1Dir;        // Variable to store the direction of QEI1

volatile uint32_t Pulses_per_period;     // Variable to store the number of pulses accumulated through Velocity Timer's Period in QE1
volatile uint32_t Total_pulses;          // Variable to store the number of pulses accumulated since the Vehicle started moving

volatile float Distance_per_period;      // Value in meters
volatile float Total_distance;           // Value in meters

volatile float Velocity_meter_per_second;

/* -----------------------      Function Prototypes     --------------------- */
void QEI1IntHandler(void);
void QEI1_Init (void);
