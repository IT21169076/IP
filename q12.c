# include <stdio.h>


int main(){
	
	FILE *ftpr = fopen("vcard.dat","r+");
	int dosages;
	int dos1,dos2=0;
	char studentId[15],name[15];
	if(ftpr==NULL){
		printf("Error");
		return -1;
	}
	
	fscanf(ftpr, "%*s %*s %d\n",&dosages); 
	int i;
	
	while(!feof(ftpr)){
		if(dosages==1){
			dos1++;
		}else if(dosages==2){
			dos2++;
		}
		fscanf(ftpr,"%*s %*s %d",&dosages);
	}
	printf(" number of stidents with on dosage = %d ",dos1);
	printf(" number of stidents with two dosage = %d ",dos2);
	return 0;

}
