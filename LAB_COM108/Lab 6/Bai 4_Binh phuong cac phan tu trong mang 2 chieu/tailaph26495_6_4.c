#include <stdio.h>


int n, m;

void input( int arr[n][m]){
	int i, j;
	for (i = 0; i< n; i++){
		for (j = 0;j < m; j++){
			printf(" a[%d][%d] = ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
}

void output(int arr[n][m]){
	int i,j;
	printf("Binh phuong cac phan tu trong mang: \n");
	for (i = 0; i< n;i++){
		for(j = 0; j < m;j++){
			printf(" a[%d][%d] = ", i+1,j+1);
			printf(" %d  \n", arr[i][j] * arr[i][j]);
		}
		printf("\n");
	}
	
}


int main(){
	int arr[n][m];
	do{
		printf(" Nhap N > 0: ");
		scanf("%d", &n);
		printf(" Nhap M > 0: ");
		scanf("%d", &m);
	}while( n <= 0 && m <= 0);
	
	input(arr);	
	output(arr);
	
	return 0;
}
