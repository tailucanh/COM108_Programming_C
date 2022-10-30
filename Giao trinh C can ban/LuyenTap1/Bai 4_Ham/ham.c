#include <stdio.h>

int tinhGiaiThua(int n){
	int i, ketQua = 1;		
	for (i=1; i<=n; i++){
		ketQua *= i;			
	}			
	return ketQua;
}


int tinhTong(int a){    //S = 1+2+….+n. 
	int i, S = 0;
	for(i=1; i<=a; i++){
		S += i;
	}
	return S;
}


void soNguyenTo(){

	int x;
	printf("Nhap so can kiem tra: ");
	scanf("%d", &x);

	if(x < 2){
		printf("---> %d khong la so nguyen to.\n", x);
	}else{
		int i,count = 1;
		for(i = 2; i < x; i++){
			if(x % i == 0){
				count = 0;
				break;
			}		
		}
		if(count == 1){
			printf("---> %d la so nguyen to.\n", x);
		}else{
			printf("---> %d khong la so nguyen to\n",x );
		}
	}
}


int timSoN_Fibonacci(int x){
	int a1 = 1, a2 =1;
	int i, a;
	
	if(x == 1 || x== 2){
		return 1;
	}else{
		for(i = 3; i<= x;i++){
			a = a1 + a2;
			a1 = a2;
			a2 = a;
		}
	}
	return a;
}


double Max_Min(float so1, float so2){
	if(so1 > so2){
		return so1;
	}else{
		return so2;
	}
	
}


int main(){
	int n;
	printf("Nhap so giai thua: ");
	scanf("%d", &n);
	printf("--> %d! = %d\n", n, tinhGiaiThua(n));


	int a;
	printf("Nhap N: ");
	scanf("%d", &a);
	printf("Tong tu 1-->%d là S = %d.\n", a, tinhTong(a));


	soNguyenTo();
	
	
	int x;
	printf("Nhap N = ");
	scanf("%d", &x);
	printf("So thu %d trong day Fibonacci la: %d \n", x, timSoN_Fibonacci(x));
	
	
	float so1, so2;
	printf("Nhap so 1: ");
	scanf("%f", &so1);
	printf("Nhap so 2: ");
	scanf("%f", &so2);
	printf("So max trng hai so %.1f va %.1f la %.1f.", so1, so2, Max_Min(so1,so2));
	
}
