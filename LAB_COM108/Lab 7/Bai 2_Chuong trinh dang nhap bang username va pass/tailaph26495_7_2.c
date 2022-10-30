#include <stdio.h>
#include <string.h>
int main(){
	char userSys[30] ;
	char passSys[30];
	char user[50],pass[50];
	
	printf(" Enter user name: ");
	scanf("%s",&user);
	printf(" Enter password: ");
	scanf("%s",&pass);
	
	
	if(strcmp(user,"admin")==0 && strcmp(pass,"12345")==0){
		printf(" Congratulation!.");
	}else{
		printf(" Sorry! You entered wrong.");
	}
	
	
	return 0;
}
