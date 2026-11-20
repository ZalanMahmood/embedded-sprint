/* #include <stdio.h>
#include <stdint.h>

typedef struct // this is a new concept for me
{
    uint8_t id;
    uint16_t temperature;
    uint8_t humidity;
} SensorReading; // what is this?

#define BIT_READY (1u << 0)  // bit 0, value 1   // this is a new concept for me
#define BIT_ERROR (1u << 1)  // bit 1, value 2
#define BIT_LOW_BATTERY (1u << 2) // bit 2, value 4

int main(void)
{
    SensorReading sensor = {1, 250, 60}; // this is showing that it read data from sensor? And SensorReading is a class?

    printf("sensor id: %u\n", sensor.id); //
    printf("temperature: %u\n", sensor.temperature);
    printf("humidity: %u\n", sensor.humidity);

    SensorReading *p = &sensor;
    printf("temperature through pointer: %u\n", p->temperature); // what is p->temperature?

    uint8_t status = 0;

    status = status | BIT_READY; // this status check is completely new concept for me
    printf("status after set READY: %u\n", status);

    status = status | BIT_ERROR;
    printf("status after set ERROR: %u\n", status);

    if (status & BIT_ERROR)
    {
        printf("error bit is set\n");
    }

    status = status & ~BIT_ERROR;
    printf("status after clear ERROR: %u\n", status);

    status = status ^ BIT_LOW_BATTERY;
    printf("status after toggle LOW_BATTERY: %u\n", status);

    return 0;
}
 */

#include <stdio.h>
#include <stdint.h>


#define BIT_LED0 (1u << 0)  // bit 0, value 1   // this is a new concept for me
#define BIT_LED1 (1u << 1)  // bit 1, value 2
#define BIT_LED3 (1u << 3) // bit 3, value 8 

int main(void)
{
    
    uint8_t status = 0;

    status = status | BIT_LED1; 
    status = status | BIT_LED3;  // can i turn both of them in one command/instruction/line code?
    printf("status after set LED1 and 3: %u\n", status);

    status = status & ~BIT_LED1;
    printf("status after clearing LED1: %u\n", status);

    status = status ^ BIT_LED0;
    printf("status after toggle LED0: %u\n", status);

    if (status & BIT_LED3)
    {
        printf("LED3 is ON\n");
    }
    

    return 0;
}
