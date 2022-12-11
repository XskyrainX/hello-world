#include <stdio.h>

int main(void)
{
    int upper_limit = 100;
    int lower_limit = 1;
    int guess = upper_limit / 2;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nb if it is bigger or l if it is lower.\n");
    printf("Uh...is your number %d?\n", guess);

    while ((response = getchar()) != 'y')
    {
        if (response == 'b')
        {
            upper_limit = guess;
            guess = (int)(upper_limit + lower_limit) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else if(response == 'l')
        {
            lower_limit = guess;
            guess = (int)(upper_limit + lower_limit) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else 
            printf("Sorry, I unerstand only y, big, low.\n");
        while (getchar() != '\n')
        {
            continue;
        }
        
    }
    printf("I knew I could do it!\n");

    return 0;
}