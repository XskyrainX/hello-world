#include <stdio.h>

#define MIN_PER_HOUR 60

int main(void)
{
    int total_minutes;
    
    printf("Please Enter the Minutes(<= 0 exit): ");
    while(1 == scanf("%d", &total_minutes) && total_minutes > 0)
    {
        printf("The total_minutes is %d, is equal to %d hour, %d minutes\n",
        total_minutes, total_minutes / MIN_PER_HOUR, total_minutes % MIN_PER_HOUR);
        printf("Please Enter the Minutes(<= 0 exit): \n");
    }
    printf("Done.\n");

    return 0;
}