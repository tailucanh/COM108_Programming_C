#include <stdio.h>

int nhapdulieu(int n){
	do{
		printf("Nhap n > 0= ");
		scanf("%d", &n);
	}while(n <= 0);	
	return n;
}

int tongChuSo(int n){
	int sum = 0;
	if(n > 0){								
		while(n > 0){
			sum += n % 10 ;
			n /= 10;
		}
	}
	return sum;
}

void phantich(int n){
	int i = 2;
	printf("\nPhan tich thanh thua so nguyen to: \n %d = ", n);
	while(i <= n){
		if(n % i == 0){
			printf(" %d", i);
			if(n != i)
				printf(" x ");
			n /= i;	
			
		}else{	
			i++;
		}
		
	}
	
}


int main(){
	int n;
	n = nhapdulieu(n);
	printf("Tong cac chu so cua %d la: %d", n, tongChuSo(n));
	phantich(n);
	
	return 0;
}
