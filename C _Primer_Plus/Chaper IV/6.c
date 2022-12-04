#include <stdio.h>
#include <string.h>

int main(void)
{
    char last_name[40];
    char first_name[40];

    printf("Please enter your last name: ");
    scanf("%s", last_name);
    printf("Please enter your First name: ");
    scanf("%s", first_name);

    printf("%s ", first_name);
    printf("%s\n", last_name);
    printf("%*d ", strlen(first_name), strlen(first_name));
    printf("%*d\n", strlen(last_name), strlen(last_name));

    printf("%s ", first_name);
    printf("%s\n", last_name);
    printf("%-*d ", strlen(first_name), strlen(first_name));
    printf("%-*d\n", strlen(last_name), strlen(last_name));

    return 0;
}