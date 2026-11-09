//18
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "");
    wchar_t ch;
    int counter;

    while ((ch = getwchar()) != L'#' && ch != WEOF)
    {
        if (ch == L'о') counter++;
    }
    wprintf(L"Number of replacements of L\'о\' with L\'0\': %d", counter);

    return 0;
}
