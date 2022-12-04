#include <stdio.h>

void two(void)
{
    printf("\ntwo\n");
}

void one_three(void)
{
    printf("one");
    two();
    printf("three");
}

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("\ndone!");

    return 0;
}

