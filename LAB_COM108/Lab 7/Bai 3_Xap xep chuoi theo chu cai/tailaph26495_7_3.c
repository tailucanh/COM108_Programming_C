#include <stdio.h>
#include <string.h>


int main(){
	char arr[5][30];
	int i,j;
	printf(" Nhap thanh phan chuoi: \n");
	for (i = 0; i< 5; i++){	
			printf("  arr[%d]: ", i+1);
			gets(arr[i]);
	}
	
	for (i = 0; i< 5;i++){
		for(j = i+1;j<5; j++){
			if(strcmp(arr[i],arr[j]) > 0){
				char temp[20];
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	
	printf("Chuoi vua nhap da sap xep: \n");
	for (i = 0; i< 5; i++){	
		printf("\n  arr[%d] : %s ",i+1, arr[i]);
		
	}
	
	return 0;
}
