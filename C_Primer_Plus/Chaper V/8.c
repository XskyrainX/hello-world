#include <stdio.h>

int main(void)
{
    int input, temp;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: \n");
    scanf("%d", &input);
    temp = input;
    printf("Now Enter the first operand: \n");
    
    while((1 == scanf("%d", &input)) && input > 0)
    {
        printf("%d %% %d is %d\n", input, temp, input % temp);
        printf("Enter nex number for fist operand (<= 0 to quit): \n");
    }
    printf("Done.\n");
    
    return 0;
}