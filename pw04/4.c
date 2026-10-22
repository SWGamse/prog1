//14
#include <stdio.h>

int main(void)
{
    int N, i = 1, P = 1;
    scanf("%d", &N);
    
    while (i <= N)
    {
        P = P * i;
        i++;
    }
    printf("%d\n", P);
}
