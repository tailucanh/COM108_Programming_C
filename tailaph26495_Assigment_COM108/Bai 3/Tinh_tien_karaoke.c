#include <stdio.h>

double tinh_tien_karaoke(int start, int finish){
	int soGio = finish - start;
	float tongTien = 0;
	
	if(soGio <= 3){
		tongTien = soGio*150000;
	}else{
		tongTien = soGio*150000 + ((soGio - 3)*150000 - 150000*0.3);
	}
	
	if(start >= 14 && start <= 17){
		tongTien = tongTien - (tongTien*0.1);
	}
	
	return tongTien;
}



int main(){
	int x, y;
	int dieuKien = 0;
	do{		
		printf("Nhap gio bat dau: ");
		scanf("%d", &x);
		printf("Nhap gio ket thuc: ");
		scanf("%d", &y);
		
		dieuKien = (x > y || x < 12 || x > 23 || y < 12 || y > 32);
		if(dieuKien != 0){
			printf("Gio hoat dong cua quan tu 12h-->23h.\n");
			printf("Ban hay nhap lai.\n");
		}
	}while(dieuKien != 0);
	
	printf("So tien phai tra: %.0f dong", tinh_tien_karaoke(x,y));
	return 0;
}
