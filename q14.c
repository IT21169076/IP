#include<stdio.h>

int main(){
	int twoD[3][3];
	int totalRow[3];
	int totalCol[3];
	int i,j;
	for(i=0;i<=2;i++){
		
		for(j=0;j<=2;j++){
			printf("Enter Number %d : ",j+1);
			scanf("%d",&twoD[i][j]);
		}
	}
	
	printf("The 2D Array : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",twoD[i][j]);
		}
		printf("\n");
	}
	int total=0;
	//Sum of rows from The 2D Array 
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			total+=twoD[i][j];
		}
		totalRow[i] = total;
		total = 0;
		printf("\n");
	}
	
	//Sum of columns from The 2D Array
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			total+=twoD[j][i];
		}
		totalCol[i] = total;
		total = 0;
		printf("\n");
	}
	
	printf("The sum of row : \n");
	for(i=0;i<=2;i++){
		printf("%d ",totalRow[i]);
	}
	printf("\n");
	printf("The sum of Col : \n");
	for(i=0;i<=2;i++){
		printf("%d ",totalCol[i]);
	}
	
	return 0;
}
