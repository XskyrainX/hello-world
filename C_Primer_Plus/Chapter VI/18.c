#include <stdio.h>

int main(void)
{
    int friends_nums = 5;
    int i = 1;
    do
    {
        friends_nums = 2 * (friends_nums - i);
        printf("In the %d week, Doctor has %d friends\n", i, friends_nums);
        i++;
    } while (friends_nums < 150);
    
    return 0;
}