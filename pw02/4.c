#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("RANGE_OK: %d\n",  (unsigned int) INT_MAX * 2u + 1u == UINT_MAX);

    return 0;
}

/* В случае, если не приводить INT_MAX к unsigned int, то при умножении на 2 произойдет переполнение знакового типа int, /
что приведет к неопределенному поведению программы или ошибке компиляции.*/