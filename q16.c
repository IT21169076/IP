#include <stdio.h>
//function main program execution 
int main (){
	int i , sum ;
	int numArr[9] ;
	numArr[0] = 1 ;
	numArr[1] = 2 ;
	sum = numArr[0] + numArr[1] ;
	printf("%d %d " , numArr[0] , numArr[1]);
	for (i = 2 ; i < 8 ; i++){
	numArr[i] = numArr[i-2] + numArr[i-1] ;
	printf("%d " , numArr[i]);
	sum += numArr[i] ;
	}
	numArr[8] = sum ;
	printf("%d" , numArr[8] );
	return 0 ;
} //end function main

