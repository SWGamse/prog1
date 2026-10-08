#include <stdio.h>
#include <stdbool.h>

/*Прямое присваивание значений в переменную типа bool (аналогично для _Bool), считываемых с помощью %d 
не даёт желаемого результата, обе переменные получают значение 0 (false)*/

int main(void)
{
    bool first, second;

    scanf("%d %d", &first, &second);
    printf("MODULE_READY: %d\n", first);
    printf("FAULT_STATE: %d\n", second);
    printf("BOOL_SIZE: %d\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", first+second);

    return 0;
}