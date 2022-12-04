#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n;
    int even, odd;
    int e_sum, o_sum;
    even = odd = 0;
    e_sum = o_sum = 0;
    
    printf("Enter some integer to begin.\n");
    while (1 == scanf("%d", &n) && n != 0)
    {
        if (n % 2 == 0)
        {
            even++;
            e_sum += n;
        }
        else
        {
            odd++;
            o_sum += n;
        }
    
    }
    printf("even nums: %d, even average: %f, odd nums: %d, odd average: %f", even, (float)e_sum / even, odd, (float)o_sum / odd);

    return 0;
}