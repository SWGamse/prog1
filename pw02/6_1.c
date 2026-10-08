#include <stdio.h>
#include <stdint.h>
// странная формулировка задания, "обратно переменной типа uint8_t" по логике подразумевает присвоение той же переменной, с неизвестным названием
// но значения, описанные в примере вывода могут быть получены только при действиях с вводимым значением
int main(void)
{
    uint8_t num;
    scanf("%d", &num);

    num = num + 10;
    printf("ADD: %u\n", (unsigned int) num);

    num = num * 2;
    printf("MULT2: %u\n", (unsigned int) num);

    num = num * num;
    printf("SQR: %u\n", (unsigned int) num);

    return 0;
}