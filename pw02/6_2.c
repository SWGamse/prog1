#include <stdio.h>
#include <stdint.h>

// "сворачивание" по модулю 256 происходит из-за переполнения памяти, выделенной в uint8_t (1 байт), например, 250 - 11111010, 250+10 - (1)00000100 - 4
// старший бит "1" не учитывается, потому что он является девятым битом и в uint8_t учитываются только первые 8 бит, то есть 00000100

int main(void)
{
    uint8_t num;
    uint8_t result;
    scanf("%d", &num);

    result = num + 10;
    printf("ADD: %u\n", (unsigned int) result);

    result = num * 2;
    printf("MULT2: %u\n", (unsigned int) result);

    result = num * num;
    printf("SQR: %u\n", (unsigned int) result);

    return 0;
}