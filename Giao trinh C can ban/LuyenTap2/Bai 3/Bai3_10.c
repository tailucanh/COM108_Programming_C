#include <stdio.h>

int input(int n){
	do{
		printf("Nhap n > 0: ");
		scanf("%d", &n);		
	}while(n <= 0);
	return n;
}

int demChuSo(int n){
	int count = 0;
	
	while (n > 0){
		n /= 10;	
		count++;	
	}
	return count;
}

int demSoLe(int n){
	int count = 0;
	
	while (n > 0){
		if(n % 2 != 0){
			count++;
		}
		n /= 10;
	}
	return count;
	
}

float trungBinhCong(int n){
	float tb;
	int count = demChuSo(n) ;
	int sum = 0;
	int i;
	while ( n > 0){
		sum += n % 10;
		n /= 10;
	}
	tb = (float)sum / count;
	return tb;
	
}

int main(){
	int n;
	n = input(n);
	
	printf("So chu so cua %d la: %d", n, demChuSo(n));
	printf("\nSo chu so ke cua %d la: %d", n, demSoLe(n));
	printf("\nTrung binh cong cac chu so cua %d la: %.2f ", n, trungBinhCong(n));
	
	return 0;
}
