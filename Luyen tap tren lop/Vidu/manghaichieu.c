#include <stdio.h>


void input( int m, int n ,float arr[m][n]){
	int i,j;
	
	for( i = 0; i < m; i++)
      for( j = 0; j < n; j++)
      {
         printf(" arr[%d][%d] = ", i+1, j+1);
         scanf("%f", &arr[i][j]);
      }
}

void output( int m, int n,float arr[m][n]){
	int i,j;
	for(i = 0; i < m;i++){
		for(j = 0;j < n; j++){
			printf("  \t%.1f   ", arr[i][j]);
		}
		printf("\n");
	} 

}




float phantuMax( int m, int n, float arr[m][n]){
	int i,j;
	float Max = arr[0][0];
	for(i = 0; i<m;i++){
		for(j = 0;j<n; j++){
			if(arr[i][j] > Max){
				Max = arr[i][j];
			}	
		}
	} 
	return Max;
}

void vitriMax(int m, int n,float arr[m][n]){	
	int i,j;
	int m1 ,n1;
	float Max = arr[0][0];
	for(i = 0; i< m;i++){
		for(j = 0;j < n; j++){
			if(arr[i][j] > Max){
				m1 = i+1;
				n1 = j+1;
			}	
		}
	} 
	printf(" Dong : %d - Cot : %d", m1, n1);

}




void xapXepMang(int m, int n,float arr[m][n]){
	

}	





int main(){
	int m, n;
	int i,j;
	
	printf("  Nhap so dong: ");
	scanf("%d", &m);
	printf("  Nhap so cot: ");
	scanf("%d", &n);
	printf(" Nhap phan tu: \n"); 
	
	float arr[m][n];
	input(m,n,arr);


	printf("+---------------------------+\n");
	printf("Xuat mang vua nhap: \n");
	output(m,n,arr);
	
	printf("\n+---------------------------+\n");
	printf("  Max = %.1f\n",phantuMax(m,n,arr));
	printf("  Vi tri :  ");
	vitriMax(m,n,arr);
	
	
	printf("\n+---------------------------+\n");
	printf(" Xap xep mang thu tu tang dan tu trai sang phai: \n");
	xapXepMang(m,n,arr);
	
	return 0;
}
