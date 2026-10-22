//25
#include <stdio.h>
#define coef_hours_to_days 24

int main(void)
{
    int hours;
    int status;

    printf("Введите количество часов для последующего перевода в дни: ");
    status = scanf("%d", &hours);
    while (status == 1 & hours > 0)
    {
        printf("%d часов = %.1lf дней\n", hours, (double) hours / coef_hours_to_days);
        printf("Или %d дней и %d часов\n\n", hours / coef_hours_to_days, hours % coef_hours_to_days);
        printf("Введите количество часов для последующего перевода в дни: ");
        status = scanf("%d", &hours);
    }
}