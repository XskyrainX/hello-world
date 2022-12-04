#include <stdio.h>
#include <string.h>

int main(void)
{
    char input_string[100];

    scanf("%s", input_string);

    for (size_t i = 0; i <= strlen(input_string); i++)
    {
        printf("%c", input_string[strlen(input_string) - i]);
    }

    return 0;
    
}