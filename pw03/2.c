#include <stdio.h>
#include <string.h>

int main(void)
{
    char word1[15], word2[15];

    scanf("%s %s", word1, word2);

    printf("%s-%s\n", word1, word2);
    printf("TOTAL_LEN: %d\n", strlen(word1) + strlen(word2));

    return 0;
}

/*Спецификатор %s подразумевает под собой символьную строку, заканчивающуюся нуль-терминатором, но при использовании его
в сочетании с scanf концом символьной строки считается любой пробельный символ, например, пробел, табуляция, символ переноса каретки*/