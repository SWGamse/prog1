//5
#include <stdio.h>
#define kg_to_lb 2.20462
#define g_to_oz 0.035274
#define t_to_kg 1000.0
#define mg_to_g 0.001

int main(void)
{
    int running = 1;
    int option = 1, status;
    double value;
    printf("Mass convertor. Please enter float numbers (e.g. 3.01)\nChoose mode:\n");

    while (running)
    {
        printf("1 - kilo to pound\n2 - gram to ounce\n3 - ton to kilo\n4 - milligram to gram\n0 - exit\nChoice: ");
        if (scanf("%d", &option) != 1)
        {
            printf("\nWrong value! Try again:\n");
            while (getchar() != '\n');
            continue;
        }
        switch (option)
        {
            case 1:
                printf("\nKilos: ");
                status = scanf("%lf", &value);
                if (status != 1)
                {
                    printf("\nWrong input! Please try again.\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("Pounds: %lf\n\n", value * kg_to_lb);
                break;
            case 2:
                printf("\nGrams: ");
                status = scanf("%lf", &value);
                if (status != 1)
                {
                    printf("Wrong input! Please try again.\n\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("Ounces: %lf\n\n", value * g_to_oz);
                break;
            case 3:
                printf("\nTons: ");
                status = scanf("%lf", &value);
                if (status != 1)
                {
                    printf("Wrong input! Please try again.\n\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("Kilos: %lf\n\n", value * t_to_kg);
                break;
            case 4:
                printf("\nMilligrams: ");
                status = scanf("%lf", &value);
                if (status != 1)
                {
                    printf("Wrong input! Please try again.\n\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("Grams: %lf\n\n", value * mg_to_g);
                break;
            case 0:
                running = 0;
                break;
        }
    }
    printf("!PROGRAM STOPPED!\n");
    return 0;
}