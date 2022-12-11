#include <stdio.h>

int main(void)
{
    int score;
    char grade;
    
    printf("Enter the score.\n");
    scanf("%s", &score);
    printf("Enter the letter grade.\n");
    grade = getchar();
}