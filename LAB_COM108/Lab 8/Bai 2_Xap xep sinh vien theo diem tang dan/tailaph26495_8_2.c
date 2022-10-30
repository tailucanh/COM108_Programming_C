#include <stdio.h>


struct SinhVien {
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTB;
};	





void nhap(struct SinhVien *sv){
	int i;

		printf(" Nhap ten: ");
		fflush(stdin);
		gets((*sv).tenSV);
		printf(" Nhap mssv: ");
		fflush(stdin);
		gets((*sv).mssv);
		printf(" Nhap nganh hoc: ");
		fflush(stdin);
		gets((*sv).nganhHoc);
		printf(" Nhap diem tb: ");
		scanf("%f",&(*sv).diemTB);
		
	
}


void hienthi(struct SinhVien sv){
	
	printf("%7s  |  %-30s  |  %-20s  |  %.1f\n",sv.mssv,sv.tenSV,sv.nganhHoc,sv.diemTB);
	
	
}



void xapXep(struct SinhVien ds[], int sosv){
	int i,j;
	for( i = 0; i < sosv - 1; i++){
		for (j = i+1;j < sosv;j++){
			if(ds[i].diemTB > ds[j].diemTB){
				struct SinhVien temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		
		}
	
	}
}
void hienthiDs(struct SinhVien ds[], int sosv){
	int i;
	printf("%7s  |  %-30s  |  %-20s  |  %.s\n","Ma Sv","Ho ten","Nganh hoc","Diem tb");
	for(i =0;i< sosv;i++){
		hienthi(ds[i]);
	}
}

int main(){
	int i, sosv; 
	
	struct SinhVien ds[20];
	printf("Nhap so sinh vien : ");
	scanf("%d", &sosv);
	fflush(stdin);
	for(i = 0; i< sosv;i++){
		nhap(&ds[i]);
	}
	

	printf(" Truoic khi xap xep: \n");
	hienthiDs(ds,sosv);
	
	xapXep(ds,sosv);
	printf(" Sau khi xap xep: \n");
	hienthiDs(ds,sosv);
	
	return 0;
}
