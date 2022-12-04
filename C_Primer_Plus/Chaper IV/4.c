#include <stdio.h>

int main(void)
{
    float height;
    char name[40];

    printf("Please Enter your Height: ");
    scanf("%f", &height);
    printf("Please Enter your Name: ");
    scanf("%s", name);
    printf("%s, your are %.3f feet tall\n", name, height);

    return 0;
}
