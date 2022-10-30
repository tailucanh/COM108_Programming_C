#include <stdio.h>
#include <string.h>




int main(){
	char name[30];
	printf("Nhap chuoi tuy y: ");
	fflush(stdin);
	gets(name);
	
	printf("Chuyen thanh chu hoa: %s", strupr(name));
	printf("\nChuyen thanh chu thuong: %s", strlwr(name));
	printf("\nChuoi dao nguoc in hoa: %s", strupr(strrev(name)));
	printf("\nChuoi dao nguoc in thuong: %s", strlwr(strrev(name)));

	
	return 0;
}
