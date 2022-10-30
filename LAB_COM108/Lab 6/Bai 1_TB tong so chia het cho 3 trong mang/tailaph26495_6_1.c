#include <stdio.h>




void input( int n, int arr[]){
	int i;
	printf("Nhap so phan tu cua mang: \n");
	for (i = 0; i< n; i++){
		printf("  Number[%d] = ", i+ 1);
		scanf("%d", &arr[i]);
	}
}


float output(int n, int arr[]){
	float sum = 0, tb;
	float count = 0;
	int i;
	for(i = 0; i< n; i++){
		if(arr[i] % 3 == 0){
			sum += arr[i];
			count ++;
		}
	}
	tb = sum/count;
	return tb;
}


int main(){
	int n;
	int arr[n];
	do{
		printf("Nhap n > 0: ");
		scanf("%d",&n);
	}while(n <= 0);
	input(n,arr);
	printf(" \nTrung binh tong cac so chia het cho 3 trong mang = %.2f", output(n,arr));
	return 0;
}
