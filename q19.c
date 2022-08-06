# include <stdio.h>


int main(){
	
	float number;
	
	printf("Enter price for nexen tire : ");
	scanf("%f",&number);
	
	float tot1 = number -  number*40/100;
	printf("%.2f ",tot1);

}
