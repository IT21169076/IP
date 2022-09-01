#include <stdio.h>
int main (void)
{
int i , count = 1, round = 0 ;
float avg ;
char another ;
do
{
printf("enter scores of player %d (between 0-8)\n", count);
 for (i = 1 ;i <= 5 ; i++)
 {
 printf("round %d - ", i);
 scanf("%d", &round);
 
 avg += round ;
}
printf("\nAverage scores - %.1f \n", avg / 5.0);
printf("Do you want to enter mark of another student(y/n)? ");
scanf(" %c",&another);
puts(" ");
if (another == 'n' || another == 'N')
{
return 0 ;
}
avg = 0 ;
count++ ;
} while(another == 'y' || another == 'Y');
 return 0 ;
 }
