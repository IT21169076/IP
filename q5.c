#include <stdio.h>

int main(){
	
	int originalArray[5];
	int i;
	for(i=0;i<=4;i++){
		printf("Enter Number %d : ",i+1);
		scanf("%d",&originalArray[i]);
	}
	printf("\n");
	
	for(i=0;i<=4;i++){
		printf("%d ",originalArray[i]);
	}
	
	int tem= originalArray[0];
	for(i=0;i<=4;i++){
		originalArray[i] = originalArray[i+1];
		originalArray[5] = tem;
	}
	
	printf("\n");
	for(i=0;i<=4;i++){
		printf("%d ",originalArray[i]);
	}
	
	return 0;
}

