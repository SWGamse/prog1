//5
#include <stdio.h>
#define kg_to_lb 2.20462
#define g_to_oz 0.035274
#define t_to_kg 1000.0
#define mg_to_g 0.001

int main(void)
{
    int running = 1;
    int status;
    
    printf("Mass convertor. Please enter float numbers (e.g. 3.01)\nChoose mode:\n");

    while (running)
    {
        int option;
        double value;
        printf("1 - kilo to pound\n2 - gram to ounce\n3 - ton to kilo\n4 - milligram to gram\n0 - exit\nChoice: ");
        status = scanf("%d", &option);
        if (status == EOF)
        {
            printf("\n\n** Andrey Andreyevich, please stop using Ctrl+D. It is not a good idea to use it in this program!!! Please restart. **\n\n");
            break;
        }
        else if (status == 0)
        {
            char ch;
            printf("\nInvalid input! Please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }
        switch (option)
        {
            case 1:
                printf("\nKilos: ");
                status = scanf("%lf", &value);
                printf("Pounds: %lf\n\n", value * kg_to_lb);
                break;
            case 2:
                printf("\nGrams: ");
                status = scanf("%lf", &value);
                printf("Ounces: %lf\n\n", value * g_to_oz);
                break;
            case 3:
                printf("\nTons: ");
                status =  scanf("%lf", &value);
                printf("Kilos: %lf\n\n", value * t_to_kg);
                break;
            case 4:
                printf("\nMilligrams: ");
                status = scanf("%lf", &value);
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
