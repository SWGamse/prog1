//30
#include <stdio.h>
#define LOWER_TRESHOLD 10000
#define MIDDLE_TRESHOLD 50000

int main(void)
{
    double book_cost = 500.0, royalty;
    int circulation, status;

    printf("Enter the book's ciculation: ");
    status = scanf("%d", &circulation);

    if (status != 1 || circulation <= 0) 
    {
        printf("Wrong input! Please restart program.");
        return 0;
    }

    if (circulation < LOWER_TRESHOLD)
    {
        royalty = book_cost * circulation * 0.1;
    }
    else if (circulation < MIDDLE_TRESHOLD)
    {
        royalty = book_cost * circulation * 0.12;
    }
    else
    {
        royalty = book_cost * circulation * 0.15;
    }

    printf("\nCirculation : %d\nBook cost: %.2f RUB\n\n", circulation, book_cost);
    printf("Rates:\n10%% - lower 10000\n12%% - between 10000 and 50000\n15%% - over\n\n");
    printf("Total royalty amount: %.2f RUB\n", royalty);

    return 0;
}

//в задании нет данных о стоимости одной книги, взята условная сумма - 500 рублей