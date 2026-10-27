//30
#include <stdio.h>

int main(void)
{
    double arr[8], t1 = 0.0, t2 = 1.0, t3 = 0.0, sum = 0.0;
    int i;

    for (i=0; i < 16; i++)
    {
        if (i%2 == 0.0)
            arr[(int) i/2] = t1;
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    for (i = 0; i < 8; i++)
    {
        sum += arr[i];
        printf("%lf ", arr[i]);
    }
    printf("\nAVG: %lf\n", sum/8);

    return 0;
}