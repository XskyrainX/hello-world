#include <stdio.h>
#include <string.h>
#define LEN 100

int main(void)
{
    char str[LEN];
    
    printf("Please Enter a word: \n");
    scanf("%19s", str);
    printf("The word is:\n");
    printf("%s\n", str);

    printf("Reserving the world is:\n");
    for (size_t i = 0; i <= strlen(str); i++)
    {
        printf("%c", str[strlen(str) - i]);
    }

    return 0;
    
}