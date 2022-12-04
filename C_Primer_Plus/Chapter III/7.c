#include <stdio.h>

int main(void)
{
    int inch;

    printf("Please Enter Your Height: ");
    scanf("%d", &inch);

    printf("Your Height is: %fcm\n", inch * 2.54);
    return 0;
}