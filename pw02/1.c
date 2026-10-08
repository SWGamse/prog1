#include <stdio.h>

int main(void)
{
    int dec, hex, oct;

    scanf("%d %x %o", &dec, &hex, &oct);
    printf("UBIT_ID: %d\nUNIT_VERSUIN: %d\nUNIT_STATUS: %d\nSUM: %d\n", dec, hex, oct, dec+hex+oct);

    return 0;
}