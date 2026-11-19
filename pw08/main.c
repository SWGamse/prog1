//8 15 26
#include <stdio.h>
#define MAX_SIZE 100

void print_menu(void);
void get_size(int *size);
void fill_arr(int arr[], int size);
void show_arr(int arr[], int size);
void last_positive(int arr[], int size);
void count_between_equal(int arr[], int size);
void count_over_avg(int arr[], int size);

int main(void)
{
    int choice, temp, size = 5;
    int arrive[100] = {0};

    printf("Внимание! Программа работает только с целыми числами\n");
    printf("В случае, если вы ввели не целое, пожалуйста, перезапустите программу\n\n");

    print_menu();
    while ((choice = getchar()) != EOF && choice != 'g')
    {
        while ((temp = getchar()) != '\n' && temp != EOF) continue;

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
            last_positive(arrive, size);
            break;
        case 'e':
            count_between_equal(arrive, size);
            break;
        case 'f':
            count_over_avg(arrive, size);
            break;
        default:
            printf("Неверное значение! Код ASCII: %d\n", choice);
            break;      
        }

        print_menu();
    }
}

void print_menu(void)
{
    printf("\nВыберите режим работы:\na\tЗадать размер массива\n");
    printf("b\tЗаполнить массив\nc\tПредставление массива\n");
    printf("d\tИндекс последнего позитивного\ne\tРасстояние между одинаковыми\nf\tКоличество выше среднего\n");
    printf("g\tВыход\n\nВыберите пункт: ");
}

void get_size(int *size)
{
    int usr_num, temp;
    printf("\nВведите размер массива (макс - 100, 0 - возврат): ");
    scanf("%d", &usr_num);
    if (usr_num > 100 || usr_num < 0) {
        printf("Неверное значение! Возврат в меню\n");
    }
    else if (usr_num == 0) {
        while ((temp = getchar()) != '\n' && temp != EOF) continue;
        return;
    }
    else {
        printf("Принято значение %d\n", usr_num);
        *size = usr_num;
    }
    while ((temp = getchar()) != '\n' && temp != EOF) continue;
}

void fill_arr(int arr[], int size) {
    int num, temp;
    int temp_arr[size];
    for (int i = 0; i < size; i++) temp_arr[i] = arr[i];
    printf("\nВводите значения через пробел или символ начала строки\n");
    printf("Необходимое количество чисел: %d\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Ошибка ввода!\nВозврат в меню, массив остался неизменным");
            for (int i = 0; i < size; i++) arr[i] = temp_arr[i];
            while ((temp = getchar()) != '\n' && temp != EOF) continue;
            return;
        }
        arr[i] = num;
    }
    while ((temp = getchar()) != '\n' && temp != EOF) continue;
}

void show_arr(int arr[], int size) {
    printf("\nЗначения массива:\n");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\nАдреса значений:\n");
    for (int i = 0; i < size; i++) printf("%p ", &arr[i]);
    printf("\n");
}

void last_positive(int arr[], int size) {
    int index = 0, flag = 0;
    for (int i = 0; i < size; i++) {
        index = (arr[i] > 0) ? i : index;
        flag = (flag || arr[i] > 0) ? i : flag;
    }
    if (flag) printf("\nИндекс последнего положительного: %d\n", index);
    else printf("В массиве нет положительных чисел\n");
}

void count_between_equal(int arr[], int size) {
    printf("\nВнимание! учтите, что для корректной работы в массиве должно быть максимум 2 одинаковых значения.\n");
    int result = -1;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) result = j-i-1;
        }
    }
    if (result == -1) printf("\nВ массиве нет одинаковых значений, исправьте и попробуйте снова\n");
    else printf("\nРасстояние между одинаковыми - %d\n", result);
    printf("Андрей Андреевич, здравствуйте, это бесполезная строка :)\n");
}

void count_over_avg(int arr[], int size) {
    int counter = 0, sum = 0;
    float avg;
    for (int i = 0; i < size; i++) sum += arr[i];
    avg = (float)sum/size;
    for (int i = 0; i < size; i++) counter += (arr[i] > avg) ? 1 : 0;
    printf("\n%d чисел больше среднего\n", counter);
}