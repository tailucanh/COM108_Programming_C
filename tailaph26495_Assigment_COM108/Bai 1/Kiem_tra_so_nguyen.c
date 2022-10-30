#include <stdio.h>
#include <math.h>
void kiem_tra_so_nguyen(float x){
	int i;
	
	if(x == (int)x){
		printf("---> %.1f la so nguyen.\n", x);
	}else{
		printf("---> %.1f khong la so nguyen.\n", x);
	}
	
	
	if (x > 1 && x == (int)x){
		int i, sodu = 1;
		for (i = 2; i < (int)x; i++){
			if ((int)x % i == 0){
				sodu = 0;
				break;
			}
		}		
		if(sodu == 1){
			printf("---> %.1f la so nguyen to.\n", x);
		}else{
			printf("---> %.1f khong phai la so nguyen to\n", x);
		}	
	}else{
		printf("---> %.1f khong phai la so nguyen to.\n", x);
	}
	
	if(x > 0 && x == (int)x){
		for(i= 0;i <= x;i++){
			if(i*i == x){
				printf("---> %.1f la so chinh phuong.\n", x);
				break;
			}
		}
		if (i*i != x){
			printf("---> %.1f khong la so chinh phuong.\n", x);
		}
	}else{
		printf("---> %.1f khong la so chinh phuong.\n", x);
	}
	
}


int main(){
	float x;
	printf("Nhap vao so nguyen x: ");
	scanf("%f", &x);
	
	kiem_tra_so_nguyen(x);
	
	return 0;
}
