#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("FLOAT: size=%d, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%d, digits=%d, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%d, digits=%d, max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);

    return 0;
}


/*количество цифр показателя степени в выводе может отличаться в 
зависимости   от   системы,   а   на   некоторых   платформах  long double  может 
совпадать по размеру с double*/