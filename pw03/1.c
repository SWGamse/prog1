#include <stdio.h>
#include <string.h>

int main(void)
{
    char sib[20] = "SibSUTIS";

    printf("SIZEOF: %zu\n", sizeof(sib));
    printf("STRLEN: %d\n", strlen(sib));
    printf("FREE_BYTES: %d\n", (int) sizeof(sib) - (strlen(sib) + 1));

    return 0;
}