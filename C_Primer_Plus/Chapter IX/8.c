// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);    // ANSI函数原型
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);    // 函数调用
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)    // 函数定义
{
    double pow = 1;
    int i;
    
    if (0 == p)
    {
        if (0 == n)
        {
            printf("Warning! 0^0 is not defined!.\n");
        }
        pow = 1;
    }
    else if (p > 0)
    {    
        for (i = 1; i <= p; i++)
            pow *= n;
    }

    else if (p < 0)
    {
        for (i = 1; i <= (0 - p); i++)
            pow *= (1.0 / n);
/*         pow /= 1.0;
 */        printf("%lf", pow);
    }
    
    return pow;                // 返回pow的值
}