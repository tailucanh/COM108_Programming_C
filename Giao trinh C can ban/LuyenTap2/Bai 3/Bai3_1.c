#include <stdio.h>

void bai3_1(){
	int m,n;
	printf("Nhap m = ");
	scanf("%d", &m);
	printf("Nhap n = ");
	scanf("%d", &n);
	
	int i, j;
	
	for(i = 1; i <= m;i++){
		for(j = 1; j<= n; j++){
			printf(" %d", j);
		}
		printf("\n");
	}
}



int main(){

	

	bai3_1();

	return 0;
}
