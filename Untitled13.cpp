//shalini muthumali
//IT21169076
//group 11.1S
//Malabe campus
#include <stdio.h>

int main (void)
{
	int race1, race2,race3,race4, i=1;
	float avg=0; 
    float win=0;
    float max=0;
	char ch;
	
    do
{	
	printf("\nEnter the scores of player %d (between 0-5)\n", i);
	
	printf("\nround 1- ");
	scanf("%d",&race1);
	
	printf("round 2- ");
	scanf("%d",&race2);
	
	printf("round 3- ");
	scanf("%d",&race3);
	
	printf("round 4- ");
	scanf("%d",&race4);
		
	avg=(float)(race1+race2+race3+race4)/4.00;
	
	printf("average score - %.1f",avg);
		
	return 0;
}
}
