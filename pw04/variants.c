#include <stdio.h>

int main(void)
{
    const long long numb = 111260154;

    printf("4.1 - %d\n", (numb % 30) + 1);
    printf("4.2 - %d\n", ((numb + (0+7)) % 30) + 1);
    printf("4.3 - %d\n", ((numb + (0+13)) % 30) + 1);
    printf("4.4 - %d\n", ((numb + (0+19)) % 30) + 1);
    printf("4.5 - %d\n", ((numb + (0+23)) % 30) + 1);

    return 0;
}


/*4.1 - 25
4.2 - 2
4.3 - 8
4.4 - 14
4.5 - 18*/