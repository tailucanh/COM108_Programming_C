#include <stdio.h>
int main(){
	float a, b, x;
	
	printf("Nhap so a:");
	scanf("%f", &a);
	printf("Nhap so b:");
	scanf("%f", &b);
	
	if(a != 0){
		x = - (b / a);
		printf("X = %.1f", x);
	}else if(a == 0, b != 0){
		printf("Phuong trinh vo nghiem.");
	}else{
		printf("Phuong trinh co vo so nghiem.");
	}
	
	return 0;

}
