#include <stdio.h>

#define CONVENTION 60

int main(void)
{
    int total_minutes;
    
    printf("Please Enter the Minutes(<= 0 exit): ");
    scanf("%d", &total_minutes);
    while(total_minutes > 0)
    {
        printf("The total_minutes is %d, is equal to %d hour, %d minutes\n",
        total_minutes, total_minutes / CONVENTION, total_minutes % CONVENTION);
        printf("Please Enter the Minutes(<= 0 exit): ");
        scanf("%d", &total_minutes);
    }

    return 0;
}