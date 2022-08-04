#include <stdio.h>
int main (void)
{
char num[100] , I ;
while (1 )
{
 printf("Enter the number : ");
 scanf("%s" , &num);
 
 if (num[0] == '-')
 {
 return -1 ;
}
int i;
for (i = 0 ; num[i] != '\0' ; i++)
{
printf(" %c , " , num[i]);
}
puts(" "); 
}


return 0 ;
}
