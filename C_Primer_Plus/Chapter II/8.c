#include <stdio.h>

void two(void);
void one_three(void);

int main(void)
{
    printf("Starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
