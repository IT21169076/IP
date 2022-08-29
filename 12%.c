#include<stdio.h>

float calAdditionalCharges(int orderType, float subTotal);
float calTotalBill(float subTotal, float charges);

int main(void) {
	
	int orderType;
	float subTotal, charges, totalBill;
	
	printf("\nEnter sub total: ");
	scanf("%f", &subTotal);
	
	printf("Enter order type: ");
	scanf("%d", &orderType);
	
	charges = calAdditionalCharges(orderType, subTotal);
	
	if(charges == 0) {
		printf("Invalid Order type!! Try again.\n");
		return 0;
	}
		
	totalBill = calTotalBill(subTotal, charges);
	
	printf("Total bill amount: %.2f\n", totalBill);
	
	return 0;
}

float calAdditionalCharges(int orderType, float subTotal) {
	switch (orderType) {
		case 1:
			return (subTotal * 12/100) + (subTotal * 10/100);
		case 2:
			return (subTotal * 12/100);
		case 3:
			return (subTotal * 12/100) + (subTotal * 5/100);
		default:
			return 0;
	}
}

float calTotalBill(float subTotal, float charges) {
	return subTotal + charges;
}

