#include <stdio.h>

float findIncreasePercent ( int category);
float findNewPrice ( int percentage, float price);

int main (void)
{
	float price;
	int code;
	
	printf("Enter Price : ");
	scanf("%f", &price);
	
	printf("Enter product code : ");
	scanf("%d", &code);
	
	printf("New price : %.2f ", findNewPrice( (int)findIncreasePercent(code),price)  );
}

float findIncreasePercent ( int category)
{
	switch(category)
	{
		case 1 : 
	    	return 10; break;
		case 2 :
		    return 15; break;
		case 3 :
			return 20 ; break;
	}	
}

float findNewPrice ( int percentage, float price)
{
	return price + price*((float)percentage/100.00);
}

