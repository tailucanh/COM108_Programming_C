#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool soNguyenTo(int n){
	int i;
	if(n < 2){
		return false;
	}
	for(i = 2 ;i<= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

void inSoNt(int n){
	int i = 2;
	printf("%d so nguyen to dau tien la: ", n);
	while (n > 0){
		if(soNguyenTo(i)){
			printf(" %d", i);
			n--;
		}
		i++;
	}
}


void lietKeFibonaci(int n){
	long long f0 = 0, f1 = 1, fn;
	int i;
	printf("\n%d so Fibonaci dau tien: \n", n);
	for(i = 0; i< n;i++){
		if(i <= 1){
			fn = i;
		}else{
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
			printf("F[%d] = %lld\n", i, fn);
	}
}


void lietKeSoChinhPhuong(int n){
	printf("\n%d so chinh phuong dau tien: \n", n);
	int i;
	for (i = 1; i<= n; i++){
		printf(" %d ",i*i);
	}

}


int main(){
	int n;
	do{
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}while(n <= 0);
	inSoNt(n);
	lietKeFibonaci(n);
	lietKeSoChinhPhuong(n);	
	
	
	return 0;
}
