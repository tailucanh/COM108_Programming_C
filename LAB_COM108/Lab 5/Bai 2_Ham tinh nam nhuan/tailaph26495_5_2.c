#include <stdio.h>

int checkYear(int i){
	int leapYear = 0;
	if(i % 400 == 0){
		leapYear = 1;
		printf("%d is leap year.", i);
		
	}else if(i % 4 == 0 && i % 100 != 0){
		leapYear = 1;
		printf("%d is leap year.", i);
		
	}else{
		printf("%d is not leap year.", i);
	}
	
	return leapYear;
}

int main(){
	int x;
	
	printf("Enter the number year : ");
	scanf("%d", &x);
	
	checkYear(x);

	return 0;
}

