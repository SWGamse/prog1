//2
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int16_t x, y;

    scanf("%hd %hd", &x, &y);
    
    printf("%f\n", (float) x/y);
    printf("SIZE_INT16: %llu\n", (unsigned long long) sizeof(int16_t));
    printf("SIZE_FLT: %llu\n", (unsigned long long) sizeof(float));

    return 0;
}

/*Без явного приведения типов обрезалась бы вещественная часть в частном*/
