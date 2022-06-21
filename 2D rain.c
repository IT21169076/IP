#include <stdio.h>

int main (void)
{
	int rain[2][3];
	int maxRain[2];
	int i, j; //counters
	
	for (i = 0; i < 2; i++)
	{
		printf("\nCity %d\n", i+1);
		
		for (j = 0; j < 3; j++)
		{
			printf("Enter the rainfall (morning/noon/evening) : ");
			scanf("%d", &rain[i][j]);
		}
	}	
	
	for (i = 0; i < 2; i++)
	{
		maxRain[i] = 0;
		
		for (j = 0; j < 3; j++)
		{
			if (maxRain[i] < rain[i][j])
			{
				maxRain[i] = rain[i][j];
			}
		}
	}
	
	printf("\nrain array\n\n\tmorning\t noon\tevening\n\n");
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t %d", rain[i][j]);		
		}
		
		printf("\n");		
	}
	
	printf("\nmaxRain array\n");
	
	for (i = 0; i < 2; i++)
	{
		printf("\n\t%d", maxRain[i]);		
	}
	
	return 0;
}
