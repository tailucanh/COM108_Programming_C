#include <stdio.h>


float HinhChuNhat(int n, float canh1, float canh2, char phepTinh){
	float ketQua;
	int i;
	for(i = 0; i< n; i++){
		if(phepTinh == 's'){
			ketQua = canh1*canh2;
		}else if(phepTinh == 'p'){
			ketQua = 2*(canh1 + canh2);
		}
	}
		return ketQua;
}



int main(){
	int i,n;
	do{
		printf(" Nhap n > 0: ");
		scanf("%d", &n);
	}while(n <= 0);
	
	float canh1[n], canh2[n];
	printf("   Nhap manng 1: \n");
	for(i = 0; i< n;i++){
		printf("\tcanh[%d] = ", i+1);
		scanf("%f",&canh1[i]);
	}
	
	printf("   Nhap mang 2: \n");
	for(i = 0; i< n;i++){
		printf("\tcanh[%d] = ", i+1);
		scanf("%f",&canh2[i]);
	}
	
	printf("\n+-----Dien tich cac hinh chu nhat-----+\n");
	for(i = 0;i < n;i++){
		printf("\tS[%d] = %.1f\n",i+1, canh1[i]*canh2[i]);
	}
	
	printf("\n+------ DIEN TICH VA CHU VI-------+\n");
	printf("\tDien tich\tChu vi\n");
	for(i = 0;i < n;i++){
		printf("\tS[%d] = %.1f.\tP[%d] = %.1f.\n",i+1,HinhChuNhat(n,canh1[i],canh2[i],'s'),i+1,HinhChuNhat(n,canh1[i],canh2[i],'p'));
	}

	
	
	
	return 0;
}
