#include <stdio.h>
int main(){

	int numArray[9];
	int total =0;
	int element1 = numArray[0] = 1;
	int element2 = numArray[1] = 2;
	
	
	printf("%d %d ",element1,element2);
	int i;
	for(i=2;i<8;i++){// 1 2 
		numArray[i] = numArray[i-2]+numArray[i-1];
		printf("%d ",numArray[i]);
		total += numArray[i];
	}
	numArray[8] = numArray[0]+numArray[1]+numArray[2]+numArray[3]+numArray[4]+numArray[5]+numArray[6]+numArray[7];
	printf("%d",numArray[8]);
	return 0;
}
