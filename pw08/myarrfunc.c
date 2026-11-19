#include <stdio.h>
#include "myarrfunc.h"

int last_positive(int *arrptr, size_t n)
{
    int index = -1;

    for (int *ptr = arrptr; ptr < arrptr + n; ptr++)
    {
        if (*ptr > 0)
            index = (int)(ptr - arrptr);
    }

    return index;
}


int count_between_equal(int *arrptr, size_t n)
{
    for (int *ptr = arrptr; ptr < arrptr + n; ptr++)
    {
        for (int *next = ptr + 1; next < arrptr + n; next++)
        {
            if (*ptr == *next)
                return (int)(next - ptr - 1);
        }
    }

    return -1;
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