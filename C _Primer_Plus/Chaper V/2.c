#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);
    int temp = input;
    while(input++ < temp + 10)
    {
        printf("%d\n", input);
    }

    return 0;
}