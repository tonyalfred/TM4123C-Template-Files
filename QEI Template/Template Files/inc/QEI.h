#include "Template Files/inc/common_includes.h"
#include "Template Files/inc/common_macros.h"
#include "Template Files/inc/debug.h"

#define VEL_INT_FREQ         1           // Macro to store the Interrupt frequency of QEI1
#define QEI1_PPR             32          // Macro to store the PPR of the QEI1
#define Wheel_Circumference  0.04714f    // The value currently here is due to using radius of shaft! we need to use radius of the wheel itself.
                                         // but, in testing we could just use a dummy value, like 20 or something, just to ease teseting, till we measure radius of wheel
                                         // the value written will be in meters

/* -----------------------      Global Variables        --------------------- */
// volatile uint32_t ui32QEI1Vel;        // Variable to store the number of pulses accumulated through Velocity Timer's Period in QE1
// volatile uint32_t ui32QEI1Pos;        // Variable to store the index  of pulses ranging from 0 to 32, with respect to a certain reference
// volatile uint32_t ui32QEI1Dis;        // Variable to store the number of pulses accumulated since the Vehicle started moving
// volatile int32_t   i32QEI1Dir;        // Variable to store the direction of QEI1
// volatile uint16_t ui16QEI1Rpm;        // Variable to store the RPM of QEI1

volatile uint32_t Pulses_Per_Period;

volatile float Distance_per_period;      // Value in meters
volatile float Total_distance;           // Value in meters

volatile float Velocity_meter_per_second;
volatile float Velocity_kilometer_per_hour;

/* -----------------------      Function Prototypes     --------------------- */
void QEI1IntHandler(void);
void QEI1_Init (void);
