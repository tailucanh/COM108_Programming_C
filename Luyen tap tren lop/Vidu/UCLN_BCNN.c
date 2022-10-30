#include <stdio.h>

int uclc(int x, int y){
	int result, i;
	int min = x;
//1.Tim so nho hon trong 2 so.
	if ( min > y){
		min = y;
	}
//2.chay vong lap tu min ve 1.
	for(i = min; i>= 1; i--){
		//3.Kiem tra x ,y co chia het cho i hay khong.
		//Neu co thi gan gia tri i.
		if(x % i == 0 && y % i == 0){
			result = i;
			break;	
		}
	}
	return result;
}


int bcnn(int x, int y){
	
	int i;
	int max = x, result;
	if(max < y){
		max = y;
	}
	
	for (i = max; i <=(x*y); i++){
		if(i % x == 0 && i % y == 0){
			result = i;
			break;
		}
	
	}
	return result;
}

int main(){
	
	int so_lon_nhat;
	so_lon_nhat = uclc(55, 1000);
	printf("so lon nhat ca hai chia het la: %d\n", so_lon_nhat);
	
	int so_nho_nhat;
	so_nho_nhat = bcnn(3, 4);
	printf("so nho nhat chia het cho ca hai la: %d", so_nho_nhat);
	
}
