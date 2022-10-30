#include <stdio.h>

void input(int n, int arr[]){
	int i;
	printf("Nhap so luong phan tu: \n");
	for(i = 0; i< n;i++){
		printf("  Number[%d] = ", i+1);
		scanf("%d", &arr[i]);		
	}	
}


int outputMin(int n, int arr[]){
	int Min = arr[0];
	int i;
	for (i = 0; i<n ;i++){
		if(arr[i] < Min){
			Min = arr[i];
		}		
	}
	return Min;
}


int outputMax(int n, int arr[]){
	int Max = arr[0];
	int i;
	for (i = 0; i<n ;i++){
		if(arr[i] > Max){
			Max = arr[i];
		}
	}
	return Max;
}


int main(){
	int n;
	int arr[n];
	do{
		printf("Nhap n > 0: ");
		scanf("%d",&n);
	}while(n <= 0);
	
	input(n,arr);	
	printf("---> Max = %d\n", outputMax(n, arr));
	printf("---> Min = %d", outputMin(n, arr));
	
	
	return 0;
}
