#include<stdio.h>
int main(){
	
	int transaction;  //withdrawals,deposits
	float bankBalance,amount,newBalance;                 
    printf("Enter Transaction Type : ");
	transaction=getchar();
	
	if(transaction=='w'||transaction=='W'){
		printf("You have selected to withdraw money\n");
		
		printf("Input your Bank Balance : ");
	    scanf("%f",&bankBalance);
	
	    printf("Input the Amount : ");
	    scanf("%f",&amount);
	    
		newBalance=bankBalance-amount;
		printf("New Balance is : %.2f\n",newBalance);
	}
	else if(transaction=='d'||transaction=='D'){
		printf("You have selected to deposit money");
		
		printf("Input your Bank Balance : ");
	    scanf("%f",&bankBalance);
	
      	printf("Input the Amount : ");
	    scanf("%f",&amount);
	    
		newBalance=bankBalance+amount;
		printf("New Balance is : %.2f\n",newBalance);
	}
	else{
		printf("You have selected an invalid transaction type");
	}
	
	return 0;
}
 
