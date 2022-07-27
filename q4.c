#include <stdio.h>

int main(){
	
	int i,j,att[4][5] = { {1,0,1,1,1}, {1,1,1,1,1}, {1,1,0,1,1}, {1,1,1,1,1}};
	
	for(i=0;i<=3;i++){
		for(j=0;j<=4;j++){
			printf("%d ",att[i][j]);
		}
		printf("\n");
	}

	return 0;
}

