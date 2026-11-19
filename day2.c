// I am going to comment the code as i have some questions
#include <stdio.h> // what this line does
#include <stdint.h> // i know this is for the uint8_t. if you need to explain, you can
#include <stddef.h> // for size_t


uint16_t sum_buffer(const uint8_t *buf, size_t len){
    uint16_t sum = 0;
    for (size_t i = 0; i<len ; i++){
        sum += *(buf+i);   
    }
    return sum;
}


int main(void)
{
    uint8_t buf[4] = {10, 20, 30, 40}; // this is an array, isnt it?
    
    printf("value: %u\n", sum_buffer(buf, 4));

    uint8_t buf2[2] = {100, 200}; // this is an array, isnt it?
    
    printf("value: %u\n", sum_buffer(buf2, 2));

    return 0;
}
