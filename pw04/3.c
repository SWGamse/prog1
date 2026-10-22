//8
#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, i = 1;
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", (int)pow(2, i) - 1);
        i++;
    }
    printf("\n");
    return 0;
}
