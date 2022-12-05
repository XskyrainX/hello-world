#include <stdio.h>

int main(void)
{
    char letter;

    printf("Please Enter a Letter: ");
    scanf("%c", &letter);
    for (size_t i = 0; i <= letter - 'A'; i++)
    {
        for (size_t j = 0; j < letter - 'A' - i; j++)
        {
            printf(" ");
        }
        for (size_t k = 0; k <= i; k++)
        {
            printf("%c", 'A' + k);
        }
        for (size_t l = 1; l <= i; l++)
        {
            printf("%c", 'A' + i - l);
        }
        
        printf("\n");
    }
    getchar();
    getchar();
    
    return 0;
}