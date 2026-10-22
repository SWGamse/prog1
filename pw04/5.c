//18
#include <stdio.h>
#define coef 1.609

int main(void)
{
    double miles;
    int status;

    status = scanf("%lf", &miles);
    while (status == 1 && miles > 0)
    {
        printf("%.2lf\n", miles * coef);
        status = scanf("%lf", &miles);
    }

    return 0;
}
