#include<stdio.h>

int main(){
	
	int proNo,noOfUsers;
	float pricingPerUser=0.00,amount=0.00;
	
	printf("product No :");
	scanf("%d",&proNo);
	
	printf("No of users :");
	scanf("%d",&noOfUsers);
	
	if(proNo==1){
		if(noOfUsers>0 && noOfUsers<=100)
		{
		pricingPerUser = 15.50;
		amount=noOfUsers*15.50;
		printf("%.2f",amount);
		
		}else if(noOfUsers>100)
		{
			int additionaluser = noOfUsers%100;
			int firstUsers = noOfUsers-additionaluser;
			amount=additionaluser*25.00 + firstUsers*15.50;
			printf("%.2f",amount);
		}
		
	}else if(proNo==2)
	{
		if(noOfUsers>0 && noOfUsers<=100)
		{
		pricingPerUser = 25.50;
		amount=noOfUsers*pricingPerUser;
		printf("%.2f",amount);
		
		}else if(noOfUsers>100){
			pricingPerUser = 35.00;
			int additionaluser = noOfUsers%100;
			int firstUsers = noOfUsers-additionaluser;
			amount=additionaluser*35.00 + firstUsers*25.50;
			printf("%.2f",amount);
			
		}
		
	}
	

	
	return 0;
	
}
