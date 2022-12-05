#include <stdio.h>

#define CONVENTION 7

int main(void)
{
    int total_days;
    
    printf("Please Enter the days(<= 0 exit): ");
    while(1 == scanf("%d", &total_days) && total_days > 0)
    {
        printf("%d days are %d weeks, %d days\n",
        total_days, total_days / CONVENTION, total_days % CONVENTION);
        printf("Please Enter the days(<= 0 exit): ");
    }

    return 0;
}