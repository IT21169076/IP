#include <stdio.h>

void multiply(int number , int range);

int main (void)
{
	int num, rang;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	printf("Enter the range : ");
	scanf("%d", &rang);
	
	multiply(num,rang);
}

void multiply(int number , int range)
{
	int i;
	
	for(i=1; i<=range ; i++)
	{
		printf("%d  *  %d  = %d\n", number, i, number*i);
	}
}

