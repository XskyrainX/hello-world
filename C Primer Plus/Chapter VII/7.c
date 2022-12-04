#include <stdio.h>

#define BASE 10
#define BASE_HOUR 40
#define OVERLOAD_RATE 1.5f
#define BREAK1 300
#define BREAK2 450
#define TAX_PRE300 0.15f
#define TAX_PRE300_TOTAL TAX_PRE300 * BREAK1 
#define TAX_THEN150 0.2f
#define TAX_THEN150_TOTAL TAX_THEN150 * (BREAK2 - BREAK1)
#define TAX_OTHER 0.25f
#define NORMAL_INCOME BASE * BASE_HOUR
int main(void)
{
    int num;
    float money;
    float tax;

    printf("Please Enter your work hours: \n");
    while (1 == scanf("%d", &num))
    {
        if (num > 40)
        {
            money = NORMAL_INCOME + (num - BASE_HOUR) * OVERLOAD_RATE * BASE;
        }
        else
        {
            money = num * BASE;
        }
        
        if (money <= BREAK1)
        {
            tax = money * TAX_PRE300;
        }
        else if (money <= BREAK2)
        {
            tax = TAX_PRE300_TOTAL + (money - 300) * TAX_THEN150;
        }
        else
        {
            tax = TAX_PRE300_TOTAL + TAX_THEN150_TOTAL + (money - 450) * TAX_OTHER;
        }        
        printf("Total work %d hours, total money is %f, tax is %f, income is %f", num, money, tax, money - tax);
    }

    return 0;
}