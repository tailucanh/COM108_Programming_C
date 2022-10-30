#include <stdio.h>

int main(){
	int menu;
	
	printf("Cho menu: \n   1.Tim so max.\n   2.Xem ngay trong tuan.\n   0.Thoat.\n");
	printf("Moi ban chon menu: ");
	scanf("%d", &menu);
	
	if(menu == 1){
		int a, b, c, Max;
		printf("Moi ban nhap ba so nguyen bat ki.\n");
		printf("--->So a = ");
		scanf("%d", &a);
		printf("--->So b = ");
		scanf("%d", &b);
		printf("--->So c = ");
		scanf("%d", &c);
		Max = a;
		if(b > Max && b >c){
			printf("B la so lon nhat trong 3 so.");
		}else if(c > Max && c > b){
			printf("C la so lon nhat trong 3 so.");
		}else{
			printf("A la so lon nhat trong 3 so.");
		}

	}else if(menu == 2){
		int n;
		printf("Hay nhap vao so nguyen tu 0 --> 6: ");
		scanf("%d", &n);
		switch(n){
			case 0:
				printf("Hom nay la CHU NHAT.");
				break;
			case 1:
				printf("Hom nay la THU 2.");
				break;
			case 2:
				printf("Hom nay la THU 3.");
				break;	
			case 3:
				printf("Hom nay la THU 4.");
				break;
			case 4:
				printf("Hom nay la THU 5.");
				break;
			case 5:
				printf("Hom nay la THU 6.");
				break;
			case 6:
				printf("Hom nay la THU 7.");
				break;
			default:
				printf("Moi ban nhap dung gia tri tu 0 --> 6");
				break;
	    }
	}else if(menu == 0){
		return 0;
		
	}else{
		printf("Ban da nhap sai menu, hay nhap lai.");
	}

	
	
	return 0;
}

