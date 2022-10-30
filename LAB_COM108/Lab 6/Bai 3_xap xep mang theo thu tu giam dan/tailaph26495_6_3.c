#include <stdio.h>

void input(int n, int arr[]){
	int i;
	for (i = 0;i < n;i++){
		printf(" Number[%d] = ",i+1);
		scanf("%d", &arr[i]);
	}
}

void output(int n, int arr[]){
	int i,j;
	for (i= 0; i< n; i++){
		for(j = i+1; j<n;j++){
			if(arr[i] < arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
	printf(" Xap xep mang theo tu tu giam dan la: \n");
	for (i = 0; i< n; i++){
		printf(" Number[%d] = %d\n", i+1, arr[i]);
	}
	
}


int main(){
	int n;
	int arr[n];
	do{
		printf("Nhap N > 0: ");
		scanf("%d",&n);
	}while( n<0);
	
	input(n, arr);
	output(n, arr);
	
	
	return 0;
}
