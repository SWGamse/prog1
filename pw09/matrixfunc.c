#include <stdio.h>
#define MAX_H 100
#define MAX_W 100

int get_max(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    int max = arr[0][0];
    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int min_each_col(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    int min[w];
    for (size_t j = 0; j < w; j++) {
        min[j] = arr[0][j];
        for (size_t i = 1; i < h; i++) {
            if (arr[i][j] < min[j]) {
                min[j] = arr[i][j];
            }
        }
    }
    return min;
}

int count_below_avg(int *arrptr, size_t n)
{
    if (n == 0)
        return -1;

    double sum = 0;
    double avg;
    int counter = 0;

    for (int *ptr = arrptr; ptr < arrptr + n; ptr++)
        sum += *ptr;

    avg = sum / n;

    for (int *ptr = arrptr; ptr < arrptr + n; ptr++)
    {
        if (*ptr < avg)
            counter++;
    }

    return counter;
}

int count_above_avg_each_row(int arr[MAX_H][MAX_W], size_t h, size_t w) {
    printf("\nКоличество элементов выше среднего в каждой строке:\n");
    for (size_t i = 0; i < h; i++) {
        printf("Строка %zu: %d\n", i, count_below_avg(arr[i], w));
    }
    return 0;
}