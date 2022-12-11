#include <stdio.h>
#include <ctype.h>

void delete_other_input(void);
int get_first(void);
int show_menu(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void)
{
    int ch;

    while ((ch = show_menu()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;

        default:
            putchar(ch);
            break;
        }
    }
    printf("Bye.\n");

    return 0;    
}

void delete_other_input(void)
{
    while (getchar() != '\n')
    {
        continue;
    }
}

int get_first(void)
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
    printf("Enter the operation of your choice: \n");
    printf("a) add                          s) subtract\n");
    printf("m) multiply                     d) divide\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");

    character = get_first();
    if (character != 'a' && character != 's' && character != 'm' && character != 'd' && character != 'q')
    {
        printf("Please enter character the operation rand you want, including a, s, m, d ,q to quit\n");        
    }

    return character;
}

void add(void)
{
    float operand1, operand2;

    printf("Enter first number: ");
    while (1 != scanf("%f", &operand1))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }

    printf("Enter second number: ");
    while (1 != scanf("%f", &operand2))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }
    
    printf("%f + %f = %f\n", operand1, operand2, operand1 + operand2);
}

void subtract(void)
{
    float operand1, operand2;

    printf("Enter first number: ");
    while (1 != scanf("%f", &operand1))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }

    printf("Enter second number: ");
    while (1 != scanf("%f", &operand2))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }
    
    printf("%f - %f = %f\n", operand1, operand2, operand1 - operand2);
}

void multiply(void)
{
    float operand1, operand2;

    printf("Enter first number: ");
    while (1 != scanf("%f", &operand1))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }

    printf("Enter second number: ");
    while (1 != scanf("%f", &operand2))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }
    
    printf("%f * %f = %f\n", operand1, operand2, operand1 * operand2);
}

void divide(void)
{
    float operand1, operand2;

    printf("Enter first number: ");
    while (1 != scanf("%f", &operand1))
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3\n");
    }

    printf("Enter a number other than 0: ");
    while (1 != scanf("%f", &operand2) || operand2 == 0)
    {
        delete_other_input();
        printf("Please enter a number, such as 2.5, -1.78E8, or 3, ");
        printf("Also enter a number other than 0\n");
    }
    
    printf("%f / %f = %f\n", operand1, operand2, operand1 / operand2);
}