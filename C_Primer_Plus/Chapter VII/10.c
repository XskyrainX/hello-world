#include <stdio.h>

#define SINGLE 17850
#define OWNER 23900
#define MARRY 29750
#define MARRIED 14875
#define TAX_BASE 0.15F
#define TAX_EXTRA 0.28F

void show_tax(int scope, int money);

int main(void)
{
    int ch;
    unsigned long zh;
    while (1 == scanf("%d", &ch))
    {
        switch (ch)
        {
        case 1:
            printf("Please enter the total income\n");
            if (1 == scanf("%lu", &zh));
            {
                show_tax(SINGLE, zh);
            }
            
            break;
        case 2:
            printf("Please enter the total income\n");
            if (1 == scanf("%lu", &zh));
            {
                show_tax(OWNER, zh);
            }
            
            break;
        case 3:
            printf("Please enter the total income\n");
            if (1 == scanf("%lu", &zh));
            {
                show_tax(MARRY, zh);
            }
            
            break;
        case 4:
            printf("Please enter the total income\n");
            if (1 == scanf("%lu", &zh));
            {
                show_tax(MARRIED, zh);
            }
            break;

        default:
            printf("Please enter the number 1 2 3 4\n");
            break;
        }
    }

    return 0;
}

void show_tax(int scope, int money)
{
    float tax;
    
    if (money <= scope)
    {
        tax = (float)money * TAX_BASE;
    }
    else
    {
        tax = (float)(money - scope) * TAX_EXTRA + scope * TAX_BASE;
    }

    printf("The total tax is $%f\n", tax);
}