#include <stdio.h>
int main(void)
{
 int i ;
 int upper = 0;
 char myArray[100];
 printf("input word : ");
 scanf("%s" , myArray);
 for(i=0; myArray[i]!= '\0'; i++){
 
 if(myArray[i] % 2 == 0){
 printf("%c\t" , myArray[i]);
 }
 
 else{
 printf("*\t");}
 }
 return 0;
}

