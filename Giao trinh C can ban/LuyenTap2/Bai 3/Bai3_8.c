#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool bai3_8(int n){			//Tim so nguyen to trong [a,b]
	if(n < 2){
		return false;
	}
	int i;
	for(i = 2; i<= sqrt(n); i++ ){
		if(n % i == 0)
		return false;
	}
	return true;
}

int main(){
	int a, b;
	int i;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);

	if(a > 0 && b > 0){
		printf("Cac so nguyen to trong [%d,%d] la: ", a, b);
		for (i = a; i<= b;i++){
			if(bai3_8(i)){
				printf(" %d", i);
			}
		}
	}else{
		printf("Nhap a,b > 0");
	}

}
