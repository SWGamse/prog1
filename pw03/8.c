#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    setlocale(LC_ALL, "");

    const char c[] = "Сбой матрицы";
    const wchar_t wc[] = L"Сбой матрицы"; 

    printf("char -> sizeof: %zu bytes, strlen: %d chars\n", sizeof(c), strlen(c));
    printf("wchar -> sizeof: %zu bytes, wcslen: %d chars\n", sizeof(wc), wcslen(wc));

    return 0;
}