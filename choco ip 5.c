#include<stdio.h>

int main(void) {
	
	float size[3][5];
	float avgSize[3];
	float totalSize;
    int i,j;
	for(i = 0; i < 3; i++) {
		totalSize = 0;
		printf("\nEnter Machine %d chocolate balles sizes\n", i+1);
		for( j = 0; j < 5; j++) {	
			printf(" Enter size %d: ", j+1);
			scanf("%f", &size[i][j]);
			totalSize += size[i][j];
		}
		avgSize[i] = totalSize / 5.0;
	}

	for(i = 0; i < 3; i++) {
		printf("\n Avarage chocolate balles size of machine %d: %.2f", i+1, avgSize[i]);
	}

	return 0;
}

