#include <stdio.h>
#include <stdint.h>

uint32_t get_value(void) {
    return 123456;
}

uint8_t add_uint8(uint8_t a, uint8_t b) {
    uint16_t sum = (uint16_t)a + (uint16_t)b;
    if (sum > 255)
    {
        return 255;
    }
    else
    {
        return (uint8_t)sum;
    }
    
}

int main(void) {
    uint8_t sensor = 200;
    uint8_t sensor2 = 50;
    //sensor = sensor + 100;

    //uint16_t count = 70000;

    printf("sensor: %u\n", sensor);
    printf("sensor2: %u\n", sensor2);
    printf("value: %u\n", add_uint8(sensor, sensor2));
    return 0;
}
