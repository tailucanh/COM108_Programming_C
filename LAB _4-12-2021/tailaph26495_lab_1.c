#include <stdio.h>

int main(){
	char menu;	
	
	do{
				
		printf(" ------------CHO MENU-------------\n ");
		printf(" A.  Kiem tra so nguyen to\n");	
		printf("  B.  Xem bang cuu chuong\n");
		printf("  C.  Thong tin\n");
		printf("  D.  Thoat\n");
		
		printf("Hay chon menu: ");
		fflush(stdin);
		scanf("%s", &menu);		
	
	switch(menu){
		int x;
		case 'A':
		case 'a':		
			printf("Nhap so nguyen duong x = ");
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
			printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
			getch();
			system("cls");
			break;
			
			
		int i, n, thuong;	
		case 'B':
			do{
				printf("Nhap vao so nguyen tu 2-->10 : ");
				scanf("%d", &n);			
			}while(n < 2 || n > 10);
			printf("Bang cuu chuong nhan %d la: \n", n);
				for(i = 0; i <= 10; i++){
					thuong = n*i;					
					printf("\t%d * %d = %d\n", n, i, thuong);
				}
			printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");	
			getch();
			system("cls");			
			break;
			
			
		case 'C':		
			printf("\n-->Ho ten: Luc Anh Tai");
			printf("\n-->Email: tailaph26495@fpt.edu.vn.\n");
			printf("-->Lop : CP17317");
			printf("\nHoan thanh chuc nang, bam Enter de tiep tuc...");
			getch();
			system("cls");
			break;
			
		case 'D':		
			printf("Goodbye");
			return 0;
			break;
		default:
			system("cls");		
			printf("Ban nhap sai, hay bam ENTER de nhap lai.\n ");	
			getch();
			break;	
		}
	}while(1);
	
	
	
	
	return 0;	
}	
