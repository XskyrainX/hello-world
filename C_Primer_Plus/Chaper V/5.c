#include <stdio.h>

int main(void)                   
{
    int count, sum;            
    int temp;
    
    printf("Enter the number of days you work: ");
    scanf("%d", &count);      

    temp = count + 20;
    sum = 0;                  
    
    while (count++ < temp)        
        sum += count;
    
    printf("sum = %d\n", sum);  

    return 0;           
}