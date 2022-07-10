#include<stdio.h>
int main(void)
{
	FILE *medical;  //Declaring a file pointer
	medical = fopen("appointment.txt" , "w");  //Create a file for writing. 
	
	char name[100];
	char typ;
	int i=0;
	int C_count=0 , S_count = 0 , T_count = 0;
	
	//check if file is open or not
	if(medical == NULL)
	{
	printf("Not Opened");
	return -1;
	}
	
	//getting User Inputs and Save them on File
	for(i=0 ; i<5 ; i++)
	{
	printf("Enter Patient Name :");
	scanf("%s" , name);
	printf("Enter appointment Type : ");
	scanf(" %c" , &typ);
	
	//write data on file
	fprintf(medical , "%s\t  %c\n" , name , typ);
		
	}
	fclose(medical); //close file
	
	
	//Read data from exicixting File
	FILE *fmedical; //Declaring a file pointer
	fmedical = fopen("appointment.txt" , "r");  //opean Fill to Read data

	//check if file is open or not
	if(fmedical == NULL)
	{
	printf("Not Opened");
	return -1;
	}
	
	//read data from File
	fscanf(fmedical , "%s %c" , name , &typ );
	while(!feof(medical))
	{
	//Checking Appointment Type
	if(typ == 'C' || typ == 'c')
	C_count = C_count + 1;
	else if(typ == 'S' || typ == 's')
	S_count = S_count + 1;
	else if(typ== 'T' || typ== 't')
	T_count = T_count + 1;
	
	fscanf(fmedical , "%s %c" , name , &typ );
	}
	fclose(fmedical); //close file

	//Output 
	printf("\n");
	printf("Appointment Type\tNumber of Patients\n");
	printf("Consulting\t\t %d\n" , C_count);
	printf("Scanning\t\t %d\n" , S_count);
	printf("Testing\t\t\t %d\n" , T_count);
	
	return 0;
}

