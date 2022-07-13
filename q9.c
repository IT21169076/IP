# include <stdio.h>


int main(){
	
	float number;
	
	printf("Enter number : ");
	scanf("%f",&number);
	
	float tot1 = number -  number*40/100;
	float tot2 = tot1 - tot1*8/100;
	printf("%.2f ",tot2);

}
