#include<stdio.h>
//student exam marks
int main(){
	int marks[5][2];
	int finalMark[5];
	int i,j;
	for(i=0;i<=4;i++){
		printf("Component %d : \n",i+1);
		for(j=0;j<=1;j++){
			printf("Enter Marks : ");
			scanf("%d",&marks[i][j]);
		}
	}
	printf("\n");
	int final=0,comp1=0,comp2=0;
	for(i=0;i<=4;i++){
		for(j=0;j<=1;j++){
			finalMark[i] = marks[i][0]*0.4 + marks[i][1]*0.6;
		}
	}
	printf("Display the marks of each student for component 1 and 2 : \n");
	for(i=0;i<=4;i++){
		for(j=0;j<=1;j++){
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}
	
	printf("Display the fianl marks of each student : \n");
	for(i=0;i<=4;i++){
			printf("%d ",finalMark[i]);
	}
	
	
	return 0;
}
