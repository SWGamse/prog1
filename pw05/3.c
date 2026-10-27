//24
#include <stdio.h>

int main(void)
{
    double sum = 0.0, i;
    int N;
    while (scanf("%d", &N) & N > 0)
    {
        sum = 0.0;
        for (i = 1.0; i <= N; i += 1.0)
        {
            sum += 1/(i*(i+2));
        }
        printf("SUM: %.6lf\n", sum);
    }

    return 0;
}