//25
#include <stdio.h>

int main(void)
{
    char ch;
    int state = 0, count_match = 0;
    const char pattern[] = "return";

    printf("Enter sequence to find \"return\" (end with #):\n");
    while ( (ch = getchar()) != '#' && ch != EOF)
    {
        if (ch == pattern[state])
        {
            state++;
            if (state == 6)
            {
                count_match++;
                state = 0;
            }
        }
        else
        {
            state = 0;
        }
    }
    printf("Number of \"return\": %d\n", count_match);

    return 0;
}