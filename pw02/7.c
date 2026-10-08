#include <stdio.h>

int main(void)
{
    long double num;

    scanf("%Lf", &num);

    double d = num;
    float f = num;

    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", num);
    printf("FLOAT+1: %.6f\n", f+1);
    printf("DOUBLE+1: %.6f\n", d+1);
    printf("LDOUBLE+1: %.6Lf\n", num+1);

    return 0;
}

// для float обычно примерно 7 значащих цифр, в то время как в double и long double 15 и 18 соответственно, 
// а исходное число в примере обладает 15 значащими цифрами, поэтому в float оно обрезается
// при этом расстояние между двумя представимыми цифрами в районе данного числа составляет примерно 8
// поэтому прибавляемой единицы недостаточно, чтобы отобразить следующее число 
