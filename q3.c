#include <stdio.h>
#define SIZE 10
void getVaccinationDetails(int studentList[]);

int main(){
	
	int studentCount[SIZE];
	
	getVaccinationDetails(studentCount);
	
	return 0;
}

void getVaccinationDetails(int studentList[]){
	int i;
	for(i=0;i<SIZE;i++){
		int dosage;
		printf("How many doses of vacines did you receive? (Enter 0 - for none | 1 - for one dosage | 2 - for two dosage) : ");
		scanf("%d",&dosage);
		studentList[i] = dosage;
	}
}
