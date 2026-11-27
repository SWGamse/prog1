#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H
#define MAX_H 100
#define MAX_W 100

#include <stddef.h>

int get_max(int (*arr)[MAX_W], size_t h, size_t w);
int min_each_col(int (*arr)[MAX_W], size_t h, size_t w);
int count_above_avg_each_row(int (*arr)[MAX_W], size_t h, size_t w);

#endif

