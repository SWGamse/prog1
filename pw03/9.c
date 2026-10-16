#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    wchar_t call[100];
    wscanf(L"%ls", call);

    wprintf(L"Агент %ls авторизован в системе\n", call);

    return 0;
}
