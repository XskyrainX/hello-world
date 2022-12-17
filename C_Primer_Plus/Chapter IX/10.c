/* binary.c -- 以二进制形式打印制整数 */
#include <stdio.h>
void to_base_n(unsigned long n, int t);

int main(void)
{
    unsigned long number;
    int n;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu%d", &number, &n) == 2)
    {
        printf("Binary equivalent: ");
        to_base_n(number, n);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, int t)   /* 递归函数 */
{
    int r;
    int ans;

    if (t <= 10 || t >= 2)
    {
        r = n % t;
        if (n >= t)
            to_base_n(n / t, t);

        printf("%d", r);
    }
    else
    {
        printf("Please Enter the 2 - 10 number to convert.\n");
    }
    

    return;
}