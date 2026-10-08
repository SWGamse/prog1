#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("INT8: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long) INT8_MAX - INT8_MIN + 1);
    printf("UINT8: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(uint8_t), 0, UINT8_MAX, (long long) UINT8_MAX - 0 + 1);
    printf("INT16: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long) INT16_MAX - INT16_MIN + 1);
    printf("UINT16: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(uint16_t), 0, UINT16_MAX, (long long) UINT16_MAX - 0 + 1);
    printf("INT32: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long) INT32_MAX - INT32_MIN + 1);
    printf("UINT32: size=%d, min=%d, max=%d, values=%Ld\n", sizeof(uint32_t), 0, UINT32_MAX, (long long) UINT32_MAX - 0 + 1);

    return 0;
}

// Знаковый и без знаковый типы одинакового размера имеют одинаковое количество различных значений, потому что в них используется одинаковое количество байт для записи числа
// В свою очередь диапазоны различаются. В без знаковом типе диапазон представляет собой {0..2^n-1}, где n - количество байт под запись числа,
// а в знаковых типах числа распределяются в зависимости от двоичной записи числа, числа, имеющие в старшем бите 0 распределяются в диапазоне значений
// {0..2:(n-1)-1} т.к. присутствует 0, а числа с 1 в старшем бите имеют значения {2^(n-1)..-1} и каждое по факту представляет собой выражение вида (i-2^(n-1)-1) и по старшему биту распознаётся как отрицательное
// где i - перевод двоичной записи в десятичную, а 2^(n-1)-1 - максимальное положительное значение в данном типе
// т.е. для int8_t 00000001 = 1, а 10000001 = -2