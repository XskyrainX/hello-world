#include <stdio.h>

int main(void)
{
    int input;

    printf("Please enter a number: ");
    scanf("%d", &input);
    int temp = input;
    while(input++ < temp + 10)
    {
        printf("%d\n", input);
    }
    printf("Done.\n");

    return 0;
}