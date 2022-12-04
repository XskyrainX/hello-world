#include <stdio.h>

void jolly(void)
{
    for(int i = 0; i < 3; i++)
        printf("For he's a jolly good fellow!\n");
    return;
}
void deny(void)
{
    printf("Which nobody can deny!\n");
    return;
}

int main()
{
    jolly();
    deny();
    
    return 0;
}