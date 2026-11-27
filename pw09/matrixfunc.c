
#include <stdio.h>
#define MAX_H 100
#define MAX_W 100

int get_max(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    int max = **arr;

    for (int (*row)[MAX_W] = arr; row < arr + h; row++) {
        for (int *ptr = *row; ptr < *row + w; ptr++) {
            if (*ptr > max) {
                max = *ptr;
            }
        }
    }

    printf("\nМаксимальный элемент матрицы: %d\n", max);
    return max;
}

int min_each_col(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    int min[w];

    for (size_t j = 0; j < w; j++) {
        min[j] = *(*arr + j);

        for (int (*row)[MAX_W] = arr + 1; row < arr + h; row++) {
            if (*(*row + j) < min[j]) {
                min[j] = *(*row + j);
            }
        }
    }

    for (size_t j = 0; j < w; j++) {
        printf("Столбец %zu: %d\n", j + 1, min[j]);
    }

    return 0;
}

int count_below_avg(int *arrptr, size_t n) {
    if (n == 0)
        return -1;

    double sum = 0;
    double avg;
    int counter = 0;

    for (int *ptr = arrptr; ptr < arrptr + n; ptr++)
        sum += *ptr;

    avg = sum / n;

    for (int *ptr = arrptr; ptr < arrptr + n; ptr++) {
        if (*ptr < avg)
            counter++;
    }

    return counter;
}

int count_above_avg_each_row(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    printf("\nКоличество элементов выше среднего в каждой строке:\n");

    for (int (*row)[MAX_W] = arr; row < arr + h; row++) {
        printf("Строка %td: %d\n", row - arr + 1,
               count_below_avg(*row, w));
    }

    return 0;
}
