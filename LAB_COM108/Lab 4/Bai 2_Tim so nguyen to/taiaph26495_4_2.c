#include <stdio.h>

int main(){
	int x;
	printf("Nhap vao so nguyen x: ");
	scanf("%d", &x);
	
	if (x < 2){
		printf("%d khong phai la so nguyen to.", x);
	}else{
		int i, sodu = 1;
		for (i = 2; i < x; i++){
			if (x % i == 0){
				sodu = 0;
				break;
			}
		}		
		if(sodu == 1){
			printf("%d la so nguyen to.", x);
		}else{
			printf("%d khong phai la so nguyen to", x);
		}
	}
	return 0;
}
