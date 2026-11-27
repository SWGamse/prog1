// 1, 12, 27

#include <stdio.h>
#include "matrixfunc.h"

void print_menu(void);
int get_matrix_size(size_t *h, size_t *w);
int fill_matrix(int arr[MAX_H][MAX_W], size_t h, size_t w);
int show_matrix(int arr[MAX_H][MAX_W], size_t h, size_t w);

int main(void) {
    size_t h = 5, w = 5;
    int choice = 0;
    char temp;

    printf("Программа работает только с целыми числами в матрице, если вы ввели не целое, пожалуйста, перезапустите программу\n");

    int arr[MAX_H][MAX_W] = {{0}};

    print_menu();
    while ((choice = getchar()) != EOF) {
        if (choice == '\n') {
            choice = 0;
        }
        while ((temp = getchar()) != '\n' && temp != EOF);
        switch (choice) {
            case 'a':
                if (get_matrix_size(&h, &w) == 0) {
                    printf("Размер матрицы установлен: %zu x %zu\n", h, w);
                    while ((temp = getchar()) != '\n' && temp != EOF);
                }
                break;
            case 'b':
                if (fill_matrix(arr, h, w) == 0) {
                    printf("Матрица заполнена успешно.\n");
                    while ((temp = getchar()) != '\n' && temp != EOF);
                }
                break;
            case 'c':
                if (show_matrix(arr, h, w) == 0) {
                    printf("Матрица отображена успешно.\n");
                }
                break;
            case 'd':
                if (get_max(arr, h, w) == 0) {
                    printf("Функция выполнена успешно\n");
                }
                break;
            case 'e':
                if (min_each_col(arr, h, w) == 0) {
                    printf("Функция выполнена успешно\n");
                }
                break;
            case 'f':
                if (count_above_avg_each_row(arr, h, w) == 0) {
                    printf("Функция выполнена успешно\n");
                }
                break;
            case 'g':
                printf("Программа выполнена успешно. До свидания!\n");
                return 0;
            default:
                printf("\nНеверный пункт меню. Пожалуйста, выберите пункт меню в соответствии с списком.\n");
        }
        
        print_menu();
    }
    return 0;
}

void print_menu(void) {
    printf("\na\tЗадать размер матрицы (строки, столбцы)\n");
    printf("b\tЗаполнить матрицу\n");
    printf("c\tПредставление матрицы (значения, адреса элементов)\n");
    printf("d\tОпределение максимального элемента в матрице\n");
    printf("e\tОпределение минимального каждого столбца матрицы\n");
    printf("f\tОпределение количества выше среднего каждой строки\n");
    printf("g\tВыход\n");
    printf("Выберите пункт меню: ");
}

int get_matrix_size(size_t *h, size_t *w) {
    size_t temp_h = *h, temp_w = *w;
    printf("\nВведите количество строк (не более %d): ", MAX_H);
    if (scanf("%zu", h) != 1 || *h == 0 || *h > MAX_H) {
        printf("Ошибка: неверный ввод количества строк. Значения не были изменены.\n");
        *h = temp_h;
        return -1;
    }

    printf("Введите количество столбцов (не более %d): ", MAX_W);
    if (scanf("%zu", w) != 1 || *w == 0 || *w > MAX_W) {
        printf("Ошибка: неверный ввод количества столбцов. Значения не были изменены.\n");
        *w = temp_w;
        return -1;
    }

    return 0;
} 

int fill_matrix(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    printf("\nРазмер матрицы: %zu x %zu\n", h, w);
    printf("Количество элементов матрицы: %zu\n", h * w);
    printf("Введите элементы матрицы (целые числа):\n");
    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w; j++) {
            if (scanf("%d", &arr[i][j]) != 1) {
                printf("Ошибка: неверный ввод элемента матрицы. Пожалуйста, введите целое число.\n");
                return -1;
            }
        }
    }
    return 0;
}

int show_matrix(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    printf("\nЗначения и адреса матрицы:\n");
    for (size_t i = 0; i < h; i++) {
        printf("\nСтрока %zu: \n", i);
        for (size_t j = 0; j < w; j++) {
            printf("arr[%zu][%zu] = %d\t%p\n", i, j, arr[i][j], &arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}