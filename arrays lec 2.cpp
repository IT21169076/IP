#include <stdio.h>
int main (void){
int size;
int total = 0;
int counter = 0;

printf("enter the size of the array");
scanf("%d",&size);

int array[size];

while (counter<size){

printf("enter %d value:",(counter + 1));
scanf("%d",&array[counter]);
counter ++;
}
counter = 0;
while(counter<size){

total = total + array[counter];
counter++;
}
printf("%d",total);
}

