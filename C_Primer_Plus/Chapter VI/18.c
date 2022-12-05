#include <stdio.h>

int main(void)
{
    int friends = 5;
    int i = 1;
    while (friends < 150)
    {
        printf("At the %d week, ", i);
        printf("Rabnud has %d friends\n", friends);
        friends = 2 * (friends - i++);
    }
    printf("At %d weeks, over Dunbar's number(150).\n", i);
    
    return 0;
}