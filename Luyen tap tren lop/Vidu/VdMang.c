#include <stdio.h>



int main(){
	int n,i;
	int arr[100];
	do{
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}while(n <= 0);
	for(i = 0; i< n;i++){
		printf(" So[%d] = ", i+1);
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	float tbCong;
	for(i = 0; i < n;i++){
		sum += arr[i];
		tbCong = (float)sum/n;	
	}
	
	printf("Tong cac so tren = %d\n", sum);
	printf("Tb cong cac so tren = %.1f\n", tbCong);
	
	int Min = arr[0];
	int Max = arr[0];
	for (i = 0;i< n; i++){
		if(arr[i] < Min){
			Min = arr[i];			
		}
		if(arr[i] > Max){
			Max = arr[i];
		}
	}
	printf("---> MAX =  %d\n", Max);
	printf("---> Min = %d\n", Min);


	return 0;
}
