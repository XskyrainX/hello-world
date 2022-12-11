#include <stdio.h>
#include <ctype.h>

#define EXTRA_HOUR 1.5F
#define BASE_TAX 0.15F
#define EXTRA_TAX 0.2F
#define EXCEED_TAX 0.25F
#define BREAK1 300
#define BREAK2 450

int show_menu(void);
void show_salary(float num);
int get_first(void);
void delete_other_input(void);

int main(void)
{
    int ch;

    while ((ch = show_menu()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            show_salary(8.75f);
            break;
        case 'b':
            show_salary(9.33f);
            break;
        case 'c':
            show_salary(10.00f);
            break;
        case 'd':
            show_salary(11.20f);
            break;                                
        default:
            putchar(ch);
            break;
        }
    }
    printf("Bye.\n");

    return 0;
}
void delete_other_input()
{
    while (getchar() != '\n')
    {
        continue;
    }
}
int get_first()
{
    int ch;

    do
    {
        ch = getchar();
    } while (isspace(ch));
    
    delete_other_input();

    return ch;
}

int show_menu(void)
{
    int character;

    printf("*****************************************************************\n");
    printf("Enter the character corresponding to the desired pay rate or action:\n");
    printf("a) $%.2f                          b) $%.2f\n", 8.75, 9.33);
    printf("c) $%.2f                         d) $%.2f\n", 10.00, 11.20);
    printf("q) quit\n");
    printf("*****************************************************************\n");

    character = get_first();
    if (character != 'a' && character != 'b' && character != 'c' && character != 'd' && character != 'q')
    {
        printf("Please enter character from a to d, q to quit\n");        
    }

    return character;
}

void show_salary(float base)
{
    int hour;
    float money, tax;
    money = tax = 0;
/* 务必思考全面 */
    printf("Please enter the work hours\n");
    while(1 != scanf("%d", &hour) || hour < 0)
    {
        delete_other_input();
        printf("Please enter the positive number");
    }
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