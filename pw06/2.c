//18
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "");
    wchar_t ch;
    int counter;

    while ((ch = getwchar()) != L'#' && ch != EOF)
    {
        if (ch == L'о') counter++;
    }
    wprintf("Количество замен L\'о\' на L\'0\': %d", counter);

    return 0;
}