#include <stdio.h>

int main(void)
{
    float speed;
    float megabytes;
    float time;

    printf("Please Enter the download speed: ");
    scanf("%f", &speed);
    printf("Please Enter the download size: ");
    scanf("%f", &megabytes);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, megabytes);
    printf("downloads in %f seconds", megabytes * 8 / speed);

    return 0;
}