//8. 15. 26
#include <stdio.h>
#include "myarrfunc.h"

#define MAX_SIZE 100

void print_menu(void);
void get_size(size_t *size);
void fill_arr(int arr[], size_t size);
void show_arr(int arr[], size_t size);
void clear_input(void);

int main(void)
{
    int choice;
    size_t size = 5;
    int arrive[MAX_SIZE] = {0};

    printf("Внимание! Программа работает только с целыми числами\n");
    printf("В случае, если вы ввели не целое, пожалуйста, повторите ввод\n\n");

    print_menu();

    while ((choice = getchar()) != EOF && choice != 'g')
    {
        clear_input();

        switch (choice)
        {
        case 'a':
            get_size(&size);
            break;

        case 'b':
            fill_arr(arrive, size);
            break;

        case 'c':
            show_arr(arrive, size);
            break;

        case 'd':
        {
            int result = last_positive(arrive, size);

            if (result == -1)
                printf("\nВ массиве нет положительных чисел\n");
            else
                printf("\nИндекс последнего положительного: %d\n", result);

            break;
        }

        case 'e':
        {
            int result = count_between_equal(arrive, size);

            if (result == -1)
                printf("\nВ массиве нет одинаковых значений, исправьте и попробуйте снова\n");
            else
                printf("\nКоличество элементов между одинаковыми: %d\n", result);

            break;
        }

        case 'f':
        {
            int result = count_below_avg(arrive, size);

            if (result == -1)
                printf("\nОшибка вычисления среднего значения\n");
            else
                printf("\n%d чисел меньше среднего\n", result);

            break;
        }

        default:
            printf("Неверное значение! Код ASCII: %d\n", choice);
            break;
        }

        print_menu();
    }

    printf("\nПрограмма завершена.\n");

    return 0;
}

void print_menu(void)
{
    printf("\nВыберите режим работы:\n");
    printf("a\tЗадать размер массива\n");
    printf("b\tЗаполнить массив\n");
    printf("c\tПредставление массива\n");
    printf("d\tИндекс последнего положительного\n");
    printf("e\tКоличество элементов между одинаковыми\n");
    printf("f\tКоличество элементов ниже среднего\n");
    printf("g\tВыход\n\nВыберите пункт: ");
}

void clear_input(void)
{
    int temp;

    while ((temp = getchar()) != '\n' && temp != EOF)
        continue;
}

void get_size(size_t *size)
{
    int usr_num;

    printf("\nВведите размер массива (макс. - 100, 0 - возврат): ");

    if (scanf("%d", &usr_num) != 1)
    {
        printf("Ошибка ввода! Возврат в меню\n");
        clear_input();
        return;
    }

    clear_input();

    if (usr_num > MAX_SIZE || usr_num < 0)
    {
        printf("Неверное значение! Возврат в меню\n");
    }
    else if (usr_num == 0)
    {
        return;
    }
    else
    {
        printf("Принято значение %d\n", usr_num);
        *size = (size_t)usr_num;
    }
}

void fill_arr(int arr[], size_t size)
{
    int temp_arr[MAX_SIZE];

    printf("\nВводите значения массива через пробел или символ начала строки\n");
    printf("Необходимое количество чисел: %zu\n", size);

    for (size_t i = 0; i < size; i++)
    {
        if (scanf("%d", &temp_arr[i]) != 1)
        {
            printf("Ошибка ввода!\n");
            printf("Возврат в меню, массив остался неизменным\n");
            clear_input();
            return;
        }
    }

    clear_input();

    for (size_t i = 0; i < size; i++)
        arr[i] = temp_arr[i];

    printf("Массив успешно заполнен\n");
}

void show_arr(int arr[], size_t size)
{
    printf("\nЗначения массива:\n");

    for (size_t i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nАдреса значений:\n");

    for (size_t i = 0; i < size; i++)
        printf("%p ", (void *)&arr[i]);

    printf("\n");
}