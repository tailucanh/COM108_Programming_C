#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	float x, X1, X2, delta;
	
	printf("Nhap so a:");
	scanf("%f", &a);
	printf("Nhap so b:");
	scanf("%f", &b);
	printf("Nhap so c:");
	scanf("%f", &c);
	
	if(a == 0){
		if(b == 0 && c == 0){
			printf("Phuong trinh VO DINH.");
		}else if(b == 0 && c != 0){
			printf("Phuong trinh VO NGHIEM.");
		}else{
			x = - b/c;
			printf("Phuong trinh co nghiem x = %.1f", x);
		}
	}else if(a != 0){
		delta = b*b-4*a*c;
		if(delta < 0){
			printf("Phuong trinh VO NGHIEM.");
		}else if(delta == 0){
			x = -b/(2*a);
			printf("Phuong trinh co NGHIEM KEP x = %.1f", x);
		}else{
			X1 = -(b + sqrt(delta))/(2*a);
			X2 = -(b - sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem:\n --->X1 = %.1f.\n --->X2 = %.1f.", X1, X2);
		}
	}
	return 0;	
}
		
		

