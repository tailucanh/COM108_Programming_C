#include <stdio.h>
#include <math.h>
float dt_tam_giac(int a, int b, int c){
	float area;
				//Ct heron
	area = sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;

	return area;
}
int main(){
	int a, b, c;
	
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	printf("Enter number c: ");
	scanf("%d", &c);

	printf("S = %.2f", dt_tam_giac(a,b,c));
	
	
	return 0;
}
