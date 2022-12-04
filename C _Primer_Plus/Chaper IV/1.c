#include <stdio.h>

int main(void)
{
    char last_name[40];
    char first_name[40];

    printf("Please enter your last name: ");
    scanf("%s", last_name);
    printf("Please enter your First name: ");
    scanf("%s", first_name);
    printf("%s,%s", first_name, last_name);

    return 0;
}