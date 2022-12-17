#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
    int ch;

    printf("Feel free to enter number.\n");
    while (1 == scanf("%d", &ch))
    {
        printf("The result is %lu.\n", Fibonacci(ch));
        printf("You can enter next number.\n");
        printf("q to quit.\n");
    }
    
}

unsigned long Fibonacci(unsigned n)
{
    unsigned long ans;
    unsigned long pre, prev;
    pre = prev = ans = 1;

    if (n > 2)
    {
        for (size_t i = 3; i <= n; i++)
        {
            ans = pre + prev;
            prev = pre;
            pre = ans;
        }
    }

    return ans;
}