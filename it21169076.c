//shalini muthumali
//group 11.1
//malabe campus 
//it21169076
#include<stdio.h>//function main begin here
 int main() {
	
	int i;//declare variable
	int rate[5] = {0},//declare arrays
		rating;
  
	do{
		printf("Pls Input the service rating (1-5): ");//input service rating
		scanf("%d",&rating);
		if((rating < 1 || rating > 5)  && (rating != -1) ) { 
			printf("Invalid rating\n");//display error message 
			continue;
		}
		rate[rating - 1]++;
	} while(rating != -1);//
	 
	
	printf("\n\nRating     Number of response\n");//display the number of responce rating
	for(i = 0; i < 5; i++) { 
		printf("%-10d %d\n", i + 1,rate[i]);
	}
	
	return 0;
}//end function
