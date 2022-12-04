#include <stdio.h>

#define CM_PER_INCH 2.54

int main(void)
{
    int inch;

    printf("Please Enter Your Height: ");
    scanf("%d", &inch);

    printf("Your Height is: %fcm\n", inch * CM_PER_INCH);
    return 0;
}