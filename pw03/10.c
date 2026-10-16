#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{   
    setlocale(LC_ALL, "");

    wchar_t first[100], second[100], third[100];

    wscanf(L"%ls %ls %ls", first, second, third);
    wprintf(L"%-15ls|%20ls|%.5ls\n", first, second, third);

    return 0;
}
