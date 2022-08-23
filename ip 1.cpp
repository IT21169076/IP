#include<stdio.h>

int main(void)
{
	
	int cType;
	float amount,discount,finalBill;
	
	printf("Enter customer type :");
	scanf("%d",&cType);
	
	printf("BILL Amount :");
	scanf("%f",&amount);
	
	if(cType==1){
	if(amount<=2500)
	{
	discount = amount*0.05;
	finalBill=amount-discount;
	printf("Discount amount is : %.2f\n",discount);
	printf("final bill : %.2f\n",finalBill);

	}else if(amount>2500)
	{
	discount = amount*0.1;
	finalBill=amount-discount;
	printf("Discount amount is : %.2f\n",discount);
	printf("final bill : %.2f\n",finalBill);
	}
	}else if(cType==2)
	{
	if(amount>5000){
	discount = amount*0.1;
	finalBill=amount-discount;
	printf("Discount is :%.2f\n",discount);
	printf("final bill : %.2f\n",finalBill);
	}
	}	
}
