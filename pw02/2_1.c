#include <stdio.h>
#include <stdbool.h>

/*Для решения проблемы, описанной в 2_2 использована принудительная типизация*/

int main(void)
{
    bool first, second;
    int temp1, temp2;

    scanf("%d %d", &temp1, &temp2);
    first = (bool) temp1;
    second = (bool) temp2;
    printf("MODULE_READY: %d\n", first);
    printf("FAULT_STATE: %d\n", second);
    printf("BOOL_SIZE: %d\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", first+second);

    return 0;
}

/*Переменные типа bool имеют всего два состояния 0 и 1, что соответствует отсутствию или наличию сигнала соответственно /
Так, любое ненулевое значение в своей двоичной записи обладает как минимум одним битом, имеющим значение 1, что уже не является условием для bool = 0*/