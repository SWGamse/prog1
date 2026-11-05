//24
#include <stdio.h>
int is_triangular(int number);

int main(void)
{
    int amount_triangular = 0, sum_triangular = 0;
    int amount_other = 0, sum_other = 0;
    int actual_num;

    printf("Введите числа (0 - подсчёт результата):\n");
    while (scanf("%d", &actual_num) == 1 && actual_num > 0)
    {
        if (is_triangular(actual_num))
        {
            amount_triangular++;
            sum_triangular += actual_num;
        }
        else
        {
            amount_other++;
            sum_other += actual_num;
        }
    }
    
    printf("\nTRIANGULAR NUMBERS:\nAMOUNT: %d\nAVG: %.2f\n\n", amount_triangular, (float)sum_triangular/amount_triangular);
    printf("OTHER NUMBERS:\nAMOUNT: %d\nAVG: %.2f\n", amount_other, (float)sum_other/amount_other);

    return 0;
}

int is_triangular(int number)
{
    int result = 0, i = 1;

    while (number >= i)
    {
        number -= i;
        i++;
        result = number == 0;
    }
    return result;
}