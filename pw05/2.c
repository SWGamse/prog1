#include <stdio.h>
#define HEIGHT 5
#define CROWN 3

int main(void)
{
    int line, spaces, stars;

    for (line = 0; line < HEIGHT; line++)
    {
        int is_crown = line < CROWN;
        stars = is_crown * (2*line+1) + (1-is_crown);
        spaces = (5 - stars) / 2;

        for (int k = 0; k < spaces; k++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        for (int k = 0; k < spaces; k++) printf(" ");
        printf("\n");
    }
    
    return 0;
}