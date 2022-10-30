#include <stdio.h>

struct sinhVien{
	float diem;
	char name[50];
};


char *xepLoai(float diem){
	char *th;
	if(diem >= 9){
		th = "Xuat xac";
	}else if(diem >= 8){
		th = "Gioi";
	}else if(diem >= 6.5){
		th = "Kha";
	}else if( diem >= 5){
		th = "Trung binh";
	}else{
		th = "Yeu";
	}
	return th;
} 


void sapXepDs(struct sinhVien ds[], int soLuong){
	int i,j;
	for (i = 0; i< soLuong - 1; i++){
		for (j = i+1; j < soLuong; j++){
			if(ds[i].diem < ds[j].diem){
				struct sinhVien temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}


void input(struct sinhVien ds[], int * soLuong){
	printf(" Nhap so luong sinh vien: ");
	scanf("%d", soLuong);
	int i;
	for(i = 0; i< *soLuong;i++){
		fflush(stdin);
		printf(" Sinh vien %d. \n", i+1);
		printf(" ---> Ho ten: ");
		gets(ds[i].name);
		printf(" --->Diem trung binh: ");
		scanf("%f", &ds[i].diem);
	}
}


void output(struct sinhVien ds[], int  soLuong){
	printf("\n+------DANH SACH SINH VIEN-------+\n");
	printf("\n  STT\t  Ho ten\t  Diem trung binh\tHoc luc\t\n");
	int i;
	for(i = 0;i < soLuong;i++){
		printf("  %d\t%s\t\t %.1f\t\t %s\n", i+1, ds[i].name, ds[i].diem, xepLoai(ds[i].diem));
	}
	
}



int main(){
	struct sinhVien ds[30];
	int soLuong;
	input(ds,&soLuong);
	sapXepDs(ds,soLuong);
	output(ds,soLuong);

	

	return 0;
}
