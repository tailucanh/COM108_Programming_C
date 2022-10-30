#include <stdio.h>

float hoaHong(int n){
	float tien;
	if( n <= 100){
		tien = n * 0.05;
	} else if(n <= 300){
		tien = n * 0.1;
	}else{
		tien = n * 0.2;
	}
	return tien;
}



int main(){
	int n;
	do{
		printf("Nhap vao so doanh thu cua ban:  ");
		fflush(stdin);
		scanf("%d",&n);

	}while(n <= 0);
	printf("Doanh thu cua ban la %d trieu dong.\n",n);
	printf("So hoa hong ban nhan duoc la %.1f trieu dong.",hoaHong(n));


	return 0;
}
