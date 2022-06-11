# include <stdio.h>
float area(float length,float width);
float sub(float a,float b);
float add(float a,float b);
int main(){
	float maxLength,gardenLength1,gardenLength2;
	float maxWidth,gardenWidth1,gardenWidth2;
	printf("Enter Max Length : ");
	scanf("%f",&maxLength);
	printf("Enter Max Width : ");
	scanf("%f",&maxWidth);
	float entireArea = area(maxLength,maxWidth);
	printf("Enter gardenLength1 : ");
	scanf("%f",&gardenLength1);
	printf("Enter gardenWidth1 : ");
	scanf("%f",&gardenWidth1);
	float gardenArea1 = area(gardenLength1,gardenWidth1);
	printf("Enter gardenLength2 : ");
	scanf("%f",&gardenLength2);
	printf("Enter gardenWidth2 : ");
	scanf("%f",&gardenWidth2);
	float gardenArea2 = area(gardenLength2,gardenWidth2);
	
	float totalArea = sub( entireArea,add(gardenArea1,gardenArea2));
	printf("Total area is = %.2f ",totalArea);
	
	return 0;

}

float area(float length,float width){
	return length*width;
}

float add(float a,float b){
	return a+b;
}

float sub(float a,float b){
	return a-b;
}
