#include <stdio.h>

int main(){
	int x, i;
	int thuong;
	printf("Nhap so nguyen i tu 1 --> 10: ");
	scanf("%d", &x);	
	printf("\n<---Bang cuu chuong nhan %d---> \n", x);
	for (i = 1; i <= 10; i++){
		thuong = x*i;
		printf("\t%d * %d = %d\n", x, i, thuong);
	}
	
	return 0;
}
