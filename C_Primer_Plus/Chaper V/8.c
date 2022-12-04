#include <stdio.h>

int main(void)
{
    int input;

    printf("This program computes moduli.");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &input);
    int temp = input;
    printf("Now Enter the first operand: ");
    scanf("%d", &input);
    printf("%d %% %d is %d\n", input, temp, input % 256);
    while(input > 0)
    {
        printf("Enter nex number for fist operand (<= 0 to quit): ");
        scanf("%d", &input);
        printf("%d %% %d is %d\n", input, temp, input % 256);
    }
    printf("Done");
    
    return 0;
}