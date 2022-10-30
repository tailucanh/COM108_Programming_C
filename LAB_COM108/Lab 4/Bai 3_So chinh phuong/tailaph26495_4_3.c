#include <stdio.h>

int main(){
	int i, x;
	printf("Nhap vao so nguyen X: ");
	scanf("%d", &x);
 
	
	for(i=1;i<=x;i++){
		if(i*i == x){
			printf("--->%d la so chinh phuong.", x);
			break;
		}
	}
	if (i*i != x){
		printf("--->%d khong la so chinh phuong.", x);
	}

	return 0;
}
	

	


