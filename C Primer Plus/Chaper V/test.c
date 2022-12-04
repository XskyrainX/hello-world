/* wheat.c -- 指数增长 */
#include <stdio.h>
int main(void)
{
     int index = 0;
     int sam;

     while (index++ < 10){
          sam = 10 * index + 2;
          printf("%d\n", sam);
     }
          
     printf("sam = %d", sam);

     return 0;
}