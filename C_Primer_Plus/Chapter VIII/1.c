#include <stdio.h>

int main(void)
{
    int ch;
    unsigned long long words_num = 0;

    while ((ch = getchar()) != EOF)
    {
        words_num++;
    }
    printf("There are %llu words in the file", words_num);
    
    return 0;
}