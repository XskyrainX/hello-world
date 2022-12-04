#include <stdio.h>

#define EXTRA_HOUR 1.5F
#define BASE_TAX 0.15F
#define EXTRA_TAX 0.2F
#define EXCEED_TAX 0.25F
#define BREAK1 300
#define BREAK2 450

int show_menu(void);
void show_salary(float num);

int main(void)
{
    int ch;

    while ((ch = show_menu()) != '5')
    {
        switch (ch)
        {
        case '1':
            show_salary(8.75f);
            break;
        case '2':
            show_salary(9.33f);
            break;
        case '3':
            show_salary(10.00f);
            break;
        case '4':
            show_salary(11.20f);
            break;                                
        default:
            putchar(ch);
            break;
        }
    }
    return 0;
}
int show_menu(void)
{
    int number;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $%.2f                          2) $%.2f\n", 8.75, 9.33);
    printf("3) $%.2f                         4) $%.2f\n", 10.00, 11.20);
    printf("5) quit\n");
    printf("*****************************************************************\n");

    number = getchar();
    if (number != '1' && number != '2' && number != '3' && number!= '4')
    {
        printf("Please enter number from 1 to 5\n");        
    }

    return number;
}

void show_salary(float base)
{
    int hour;
    float money, tax;
    money = tax = 0;

    printf("Please enter the work hours\n");
    scanf("%d", &hour);

    if (hour > 40)
    {
        money = ((hour - 40) * EXTRA_HOUR + 40) * base;
    }
    else
    {
        money = hour * base;
    }
        
    if (money <= BREAK1)
    {
        tax = money * BASE_TAX;
    }
    else if (money <= BREAK2)
    {
        tax = 300 * BASE_TAX + (money - 300) * EXTRA_TAX;
    }
    else
    {
        tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (money - 450) * EXCEED_TAX;
    }        

    printf("Total work %d hours, total money is %f, tax is %f, income is %f\n", hour, money, tax, money - tax);
}