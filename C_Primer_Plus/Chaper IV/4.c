#include <stdio.h>

#define LEN 30

int main(void)
{
    float height;
    char name[LEN];

    printf("Please Enter your Height: ");
    scanf("%f", &height);
    printf("Please Enter your Name: ");
    scanf("%s", name);
    printf("%s, your are %.3f feet tall\n", name, height);

    return 0;
}
