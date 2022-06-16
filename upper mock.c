# include <stdio.h>
#include <string.h>

void validPassword(char password[20]);
int main(){
	validPassword("SHAlini21");
}

void validPassword(char password[20]){
	
	printf(" %s\n",password);
	int passwordLength = strlen(password);
	int lower,upper,specialcharater,digit=0;
	int length=0;
	int i;
	
	for(i=0;i<passwordLength;i++){
		if(password[i] >= 'A' && password[i] <= 'Z'){
			upper++;
		}
		else if(password[i]>='a' && password[i]<='z'){
			lower++;
		}
		else if(isdigit(password[i])){
			digit++;
		}
		else if(password[i]=='@' || password[i]== '&' || password[i]== '$'){
			specialcharater++;
		}
	}
	printf("lower : %d  \n",lower);
	printf("upper : %d \n",upper);
	printf("digit : %d \n",digit);
	printf("special : %d \n",specialcharater);
	
	if(length>10 && lower>1 && upper>1 && digit>1 && specialcharater>1){
		printf("%s is Valied password.",password);
	}else{
		printf("%s is not Valied password.",password);
	}

}
