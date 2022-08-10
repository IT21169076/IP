# include <stdio.h>
struct Item{
	int itemCode;
	char description[15];
	float price;
};
int main(){
	
	struct Item Details[3];
	
	FILE *fptr;
	fptr = fopen("menu.dat","a");
	
	if(fptr==NULL){
		printf("Error");
		return -1;
	}
	int i;
	for(i=0;i<=2;i++){
		printf("Enter item code : ");
		scanf("%d",&Details[i].itemCode);
		printf("Enter Description :");
		scanf(" %s",&Details[i].description);
		printf("Enter price :");
		scanf("%f",&Details[i].price);
	
		fprintf(fptr,"%d %s %.2f \n",Details[i].itemCode,Details[i].description,Details[i].price);
		
	}
	
	fclose(fptr);
	
	return 0;

}
