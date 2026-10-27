//18
#include <stdio.h>
#define HEIGHT 5

int main(void)
{
    int i, j;
    
    for (i = 0; i < HEIGHT; i++)
    {
        for (j = 0; j < HEIGHT; j++)
        {
            if (((3 <= i <= 4) & (j == 2)) | (i == 2) | ((i == 1) & (1 <= j & j <= 3)) | ((i == 0) & (j == 2)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}