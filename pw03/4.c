#include <stdio.h>
#include <string.h>

int main(void)
{
    char st[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", st);
    printf("STRLEN: %d\n", strlen(st));
    printf("SIZEOF: %zu\n", sizeof(st));

    return 0;
}

/*
x48 - H
x65 - e
x6C - l
x6C - l
x6F - o
\t - символ табуляции
x57 - W
x6F - o
x72 - r
x6C - l
x64 - d
*/