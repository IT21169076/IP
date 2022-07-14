#include <stdio.h>
int main (){
	
	int matrix[3][3];
	int totalRow[3];
	int totalCol[3];
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter Number : ");
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	int total=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			total += matrix[i][j];
		}
		totalRow[i] = total;
		total =0;
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			total += matrix[j][i];
		}
		totalCol[i] = total;
		total =0;
		printf("\n");
	}
	for(i=0;i<=2;i++){
		printf("%d ",totalRow[i]);
	}
	printf("\n");
	for(i=0;i<=2;i++){
		printf("%d ",totalCol[i]);
	}
	
	
	
	return 0 ;
} 

