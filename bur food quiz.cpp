//shalini muthumali
//IT21169076
//group 11.1
//Malabe campus
#include <stdio.h>

int main(void)
{
	int type, qty;
	float price;

do{
	printf("\nEnter Burger Type   : ");
	scanf("%d", &type);
	if(type>0 && type<4)
	{
	printf("Enter Quantity      : ");
	scanf("%d", &qty);
	
	switch(type)
	{
		case 1:
			price= 500.00*(float)qty; break;
		case 2:
			price= (500.00 + 50.00)*(float)qty; break;
		case 3:
			price= (500.00 + 100.00)*(float)qty; break;
	}
	printf("Total price : %.2f\n\n", price);
	price=0;
}
	
}while(type>0 && type<4);
	
	
	return 0;
}
