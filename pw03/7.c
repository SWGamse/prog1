#include <stdio.h>
#include <string.h>
#define dist "LinuxDistro"

int main(void)
{
    const char year[] = "2026";

    printf("DISTRO: %s\n", dist);
    printf("RDATE: %s\n", year);
    printf("STRLEN: %d\n", strlen(dist));
    printf("SIZEOF: %zu\n", sizeof(dist));

    return 0;
}