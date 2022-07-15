# include <stdio.h>

int main(){
	float amount,interest;
	char name[10];
	int rate;
	printf("Enter Name : ");
	scanf(" %s",&name);
	
	printf("Enter Amout : ");
	scanf("%f",&amount);
	
	if(amount<10000){
		interest = amount*2/100;
	}else if(amount>=10000 && amount<100000){
		interest =amount*3/100;
		
	}else if(amount>=100000 && amount<500000){
		interest =amount*5/100;
		
	}else if(amount>=500000){
		interest =amount*10/100;
	}
	
	if(interest>=100000){
		interest = interest-interest*4/100;
	}
	
	printf("%s\n",name);
	printf("%.2f\n",amount);
	printf("Interest : %.2f",interest);
	return 0;

}
