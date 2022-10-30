#include <stdio.h>
#include <conio.h>

void main(void)
{
	int giatien[] = {50, 25, 10, 5, 1}; //Khai bao va khoi tao mang voi 5 phan tu	
	int i , sotien, soto;
	
	printf("Nhap vao so tien: ");
	scanf("%d", &sotien); 
	
	for (i = 0; i < 5; i++)
	{
		soto = sotien/giatien[i]; //Tim so to cua loai tien thu i
		printf("%4d to %2d dong\n", soto, giatien[i]);
		sotien = sotien%giatien[i]; //So tien con lai sau khi da loai tru cac loai tien da co
	}
	 	
	getch();
}
