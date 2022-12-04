/* addemup.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)                   /* 计算前20个整数的和   */
{
    int count, sum;             /* 声明[1]             */
    int temp;
    scanf("%d", &count);                  /* 表达式语句          */
    temp = count + 20;
    sum = 0;                    /* 表达式语句          */
    while (count++ < temp)        /* 迭代语句            */
        sum = sum + count;
    printf("sum = %d\n", sum);  /* 表达式语句[2]         */

    return 0;                /* 跳转语句                */
}