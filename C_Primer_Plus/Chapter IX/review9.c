#include <stdio.h>

void show_menu(void);
int get_choice(int, int);

int main(void)
{
    int res;

    show_menu();
    while ((res = get_choice(1, 4)) != 4)
    {
        printf("I like the choice %d.\n", res);
        show_menu();
    }
    printf("Bye.\n");

    return 0;
}

void show_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copyfiles             2) move files\n");
    printf("3) remove files          4) quit\n");
    printf("Enter the number of your choice:\n");

    return;
}

int get_choice(int low, int high)
{
    int ch;
    int good;

    good = scanf("%d", &ch);
    while (1 ==  good && (ch < low || ch > high))
    {
        printf("%d is not a valid choice; try again\n", ch);
        show_menu();
        scanf("%d", &ch);
    }
    if (1 != good)
    {
        printf("Non-numeric input.\n");
        ch = 4;
    }

    return ch;
}