#include <stdio.h>

int findBonusTimes( char empCategory);
float findBonus(float salary , int noOfTimes);

int main (void)
{
	float salary;
	char category;
	
	printf("Enter salary : ");
	scanf("%f", &salary);
	
	printf("Enter Employee Number : ");
	scanf(" %c", &category);
	
	printf("Bonus : %.2f", findBonus(salary, findBonusTimes(category) ));
}

int findBonusTimes( char empCategory)
{
	switch(empCategory)
	{
		case 'A' :
			return 1; 
			break;
			
		case 'B' : 
		    return 2;
		    break;
		    
		case 'C' :
		case 'D' :
		case 'E' :
			return 3;
			break;		
	}
}

float findBonus(float salary , int noOfTimes)
{
	
	return salary*(float)noOfTimes;
	
}

