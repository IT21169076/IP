# include <stdio.h>

struct Item{
	int itemCode;
	char description[15];
	float unitPrice;
	int qty;
};



int main(){
	struct Item Details[5];
	int i;
	FILE *fptr;
	fptr= fopen("item.dat","a");

	if(fptr==NULL){

			printf("error");
			return -1;
	}

	for(i=0;i<=4;i++){
			printf("Enter Item Code : ");
			scanf("%d",&Details[i].itemCode);
			
			printf("Enter Item description : ");
			scanf(" %s",&Details[i].description);
			
			printf("Enter Unit price : ");
			scanf(" %f",&Details[i].unitPrice);
			
			printf("Enter Item Quantity : ");
			scanf("%d",&Details[i].qty);
			
			fprintf(fptr,"\nItem code : %d \nDescription : %s \n unitPrice : %.2f \n qty : %d \n",Details[i].itemCode,Details[i].description,Details[i].unitPrice,Details[i].qty);
			printf("\n");
		}

		fclose(fptr);

		return 0;

}
