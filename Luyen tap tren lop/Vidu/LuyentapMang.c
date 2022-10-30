#include <stdio.h>

void hoanVi(float *a, float *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


void input(int n , float arr[]){
	int i;
	printf("+-----DANH SACH SINH VIEN-----+\n");
	printf("  Nhap diem sinh vien: \n");
	for (i = 0; i< n; i++){
		printf("   Sv[%d] = ", i + 1);
		scanf("%f", &arr[i]);
	}
	
}


void xapXep(int n,float arr[]){
	int i,j;
	for(i = 0;i< n; i++){
		for (j = i+1; j < n;j++){
			if(arr[i] < arr[j]){
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}	
		}
	}

}


void xepLoai(float arr){
	if(arr > 10 || arr < 0){
		printf(" Ban hay nhap so diem tu 0-->10.");
	}else if (arr >= 8){
		printf("Gioi");
	}else if(arr >= 7){
		printf("Kha");
	}else if(arr >= 5){
		printf("Trug binh");
	}else {
		printf(" Yeu");
	}
}


int main(){
	float a,b;
	printf("+-----HOAN VI----+\n");
	printf("  Nhap A: ");
	scanf("%f",&a);
	printf("  Nhap B: ");
	scanf("%f",&b);
	hoanVi(&a,&b);
	printf("+-----Sau khi hoan doi-------+\n");
	printf("--> A = %.2f\n", a);
	printf("--> B = %.2f\n", b);
	printf("\n----------------------------------\n");
	
	int n,i;
	float arr[n];
	do{
		printf("  Nhap so Sv (> 0): ");
		scanf("%d", &n);
	}while (n <= 0);
	input(n,arr);

	
	printf("+----Sau khi sap xep----+\n");
	xapXep(n,arr);	
	for (i = 0; i< n; i++){
		printf("   Sv[%d] -  %.1f - ",i+1, arr[i]);
		xepLoai(arr[i]);
		printf("\n");
	}

	return 0;
}
