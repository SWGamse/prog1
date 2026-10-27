//25
#include <stdio.h>
#include <math.h>

int main(void)
{
    const double e = exp(1);
    double i;

    for (i = 0.0; i <= 5.0; i += 0.5)
    {
        printf("%lf\n", i*i*pow(e, -i));        
    }

    return 0;
}