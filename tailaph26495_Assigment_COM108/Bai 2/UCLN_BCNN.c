#include <stdio.h>

int ucln(int x, int y){
	int  i, result;
	int min = x;
	
	if (min > y){
		min = y;
	}
	for(i = min; i >= 1; i--){
		if(x % i == 0 && y % i == 0){
			result = i;
			break;
		}
	}
	return result;
}

int bcnn(int x, int y){
	int i,result;
	int max = x;
	
	if(y > max){
		max = y;
	}
	for(i = max; i <= (x*y); i++){
		if(i % x == 0 && i % y == 0){
			result = i;
			break;
		}
	}
	
	return result;
}

int main(){
	int x, y;
	printf("Nhap so x: ");
	scanf("%d", &x);
	printf("Nhap so y: ");
	scanf("%d", &y);

	printf("-->UCLN cua %d va %d la %d\n", x, y, ucln(x,y));
	printf("-->BCNN cua %d va %d la %d", x, y, bcnn(x,y));
}
