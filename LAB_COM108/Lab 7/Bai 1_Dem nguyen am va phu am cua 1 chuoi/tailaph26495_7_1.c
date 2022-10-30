#include <stdio.h>



int main(){
	char s[100];
	int i = 0, nguyenAm = 0, phuAm = 0;
	printf(" Nhap chuoi bat ki: ");
	
	gets(s);
	
	while (s[i++] != '\0'){
		if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
			nguyenAm++;
		}else{
			phuAm++;
		}
	}
	
	printf("\n+--------------------------------+\n");
	printf(" So nguyen am cua chuoi '%s' la: %d.\n", s, nguyenAm);
	printf(" So phu am cua chuoi '%s' la: %d.\n", s, phuAm);


	return 0;
}
