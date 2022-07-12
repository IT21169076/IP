#include <stdio.h>
#include <string.h>
//read file and find most count
int main (){
	char sub[20];
	char m_sub[20];
	int count , most = 0 ;
	FILE *student ;
	student = fopen ("studentcount.dat" , "r+");

	if (student == NULL){
	printf("File cannot open");
	return -1 ;
	}
	
	printf("Subject name \t\t student count\n");
	fscanf(student , "%s %d" , sub , &count);
	most = count ;
	while (!feof (student)){
		printf("%s \t \t \t %d \n" , sub , count );
		if (most < count){
			strcpy(m_sub , sub);
			most = count ;
		}
	fscanf(student , "%s %d" , sub , &count);
	}
	printf("\nMost populay subject is : %s" , m_sub);

	fclose (student);
	
	return 0 ;
}

