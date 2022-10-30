#include <stdio.h>

void input(int n, int arr[]){
	
	int i;
	printf("Nhap mang: \n");
	for (i = 0;i< n; i++){
		printf(" Arr[%d] = ", i +1);
		scanf("%d", &arr[i]);
	}
}

int max(int n, int arr[]){
	int i;
	int numberMax  = arr[0];
	for (i = 0; i< n; i++){
		if(arr[i] > numberMax){
			numberMax = arr[i];
		}	
	}
	return numberMax;
}

int min(int n, int arr[]){
	int i;
	int numberMin = arr[0];
	for( i = 0; i < n; i++){
		if ( arr[i] < numberMin){
			numberMin = arr[i];
		}
	}
	return numberMin;
}



void xapXepTang(int n, int arr[]){
	int i,j;
	for ( i =0; i< n; i++){
		for( j = i+1; j< n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf(" Tang dan: ");
	for ( i = 0; i< n;i++){
		printf("-- %d ", arr[i]);
	}
}

void xapXepGiam(int n, int arr[]){
	int i,j;
	for ( i =0; i< n; i++){
		for( j = i+1; j< n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n Giam dan: ");
	for ( i = 0; i< n;i++){
		printf("-- %d ", arr[i]);
	}
}




int main(){
	int n, arr[n];
	do{
		printf("Nhap n > 0: ");
		scanf("%d",&n);
	}while(n <= 0);
	input(n,arr);
	printf("-------------------------------------\n");
	printf(" --->Max = %d.\n", max(n,arr));
	printf(" --->Min = %d.\n", min(n,arr));
	
	printf("-------------------------------------\n");
	xapXepTang(n,arr);
	xapXepGiam(n,arr);
	
	
	

	return 0;
}
