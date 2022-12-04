#include <stdio.h>

void print_Smile(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        print_Smile();
    }
    printf("\n");

    for(int i = 0; i < 2; i++)
    {
        print_Smile();
    }
    printf("\n");

    print_Smile();

    return 0;
}

void print_Smile(void)
{
    printf("Smile!");

    return;
}