#include<stdio.h>

int main(){
	
	int count,marks,total;
	
	printf("How many students are in the module : ");
	scanf("%d",&count);
	
	int i,j = 1;
	while(i<=count){
		printf("Enter the marks of student %d (between 0-10)\n",i);
		while(j<=3){
			printf("Mark %d - ",j);
			scanf("%d",&marks);
			j++;
			total += marks;
		}
		i++;
		j=1;
		printf("Total Marks : %d\n",total);
		total = 0;
	}
	
	
	return 0;
}
