#include <stdio.h>

int main (void)
{
	float temp[2][3];
	float avgTemp[2];
	float sum = 0;
	int i, j; // counters

	for (i = 0; i < 2; i++)
	{
		printf("\nCity %d\n", i+1);
		
		for (j = 0; j < 3; j++)
		{
			printf("Enter the temperature (morning/noon/evening) : ");
			scanf("%f", &temp[i][j]);
		}
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = sum + temp[i][j];	
		}
		
		avgTemp[i] = sum/3;
		sum = 0;
	}
	
	printf("\ntemp array\n\n\tmorning\t noon\tevening\n\n");
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t %.1f", temp[i][j]);		
		}
		
		printf("\n");		
	}
	
	printf("\navgTemp array\n");
	
	for (i = 0; i < 2; i++)
	{
		printf("\n\t%.1f", avgTemp[i]);		
	}	

	return 0;
}




 
