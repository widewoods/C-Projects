#include <stdio.h>
#include <stdint.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3); 

    int8_t a = 127;
    int16_t b = INT16_MAX;
    int32_t c = INT32_MIN;
    int64_t d = 0;

    printf("%d, %d, %d, %lld\n", a, b, c, d);
}