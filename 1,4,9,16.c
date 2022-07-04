#include <stdio.h> 

int main (void ) 
{ 
int i ,num; 
int myArr[8] ; 
printf("Enter the number : "); 
scanf("%d" , &num); 
myArr[0] = num ; 
printf("\n%d " , myArr[0]); 
for (i = 1 ; i < 8 ; i++ ) 
{ 
myArr[i] = myArr[i-1] - (i*i) ; 
printf("%d " , myArr[i]); 
} 
return 0 ; 
} 
