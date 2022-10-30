#include <stdio.h>
#include <math.h>

void soLeSochan(){		//Nhap so tu nhiên n sau dó in ra các so chan nho hon n và các so le nho hon n.

	int n, i;
	printf("Nhap so N: ");
	scanf("%d", &n);
	printf("Cac so chan < n la : ");
	for(i = 1; i< n; i++){
		if(i % 2 == 0)
			printf("%d ", i);
	}
	printf("\nCac so le < n la : ");		
	for(i = 1; i< n; i++){				
		if(i % 2 != 0)
			printf("%d ", i);
		}
	}


void tinhTong(){ 		//S1 = 1 + 2 + ... + n. va S2 = 1 + 1/2 + 1/3 +...+1/n va  S3 = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n.
	float  x, i, s1 = 0,s2 = 0, s3 = 0,p = 1;

	printf("Nhap n : ");
	scanf("%f", &x);
	
	for (i = 1; i<= x; i++){
		s1 += i;
		s2 += 1/i;
		p *= i;
		s3 += p;
		
	}	
	printf("Tong tu 1--> %.0f la S = %.0f.\n",x, s1);
	printf("Tong tu 1--> 1/%.0f la S = %.2f\n",x, s2);
	printf("---> S3 = %.1f", s3);	
}


void tongChanLe(){
	int n, i;
	int s = 0, s1 = 0, s2 = 0;
	printf("Nhap so N: ");
	scanf("%d", &n);
	
	
	for(i = 1; i < n;i++){	
		s += i;
		}
		printf("---> Tong cac so < %d là S = %d.\n", n ,s);
		
	for(i = 1; i < n;i++){
		if(i%2 == 0){
			s1 += i;
		}
		if(i % 2 != 0){
			s2 += i;
		}
	}
		printf("---> Tong cac so chan < %d la S1 = %d.\n", n , s1);
		printf("---> Tong cac so le < %d la S1 = %d.\n", n , s2);
	
	}


void soChiaHet7(){
	int n, i, s =0;
	
	printf("Nhap so N: ");
	scanf("%d", &n);
	
	for (i = 1; i < n;i++){
		if(i % 7 == 0){
			s += i;
		}	
	}
	printf("Tong cac so < %d va chia het cho 7 la %d \n", n, s);
}


void UCLN_BCNN(){
	int a, b, i;
	int min, max, count1, count2;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	min = a;
	if(min >  b){
		min = b;
	}
	for (i = min; i >= 1; i--){
		if(a % i == 0 && b % i == 0){
			count1 = i;
			printf("--> UCLN cua %d va %d la : %d\n", a, b, count1);
			break;
		}	
	}
	
	max = a;
	if(max < b){
		max = b;		
	}
	for (i = max; i <= a*b; i++){
		if(i % a == 0 && i % b == 0){
			count2 = i;
			printf("--> BCNN cua %d va %d la : %d", a, b, count2);
			break;
		}
	}
	
}


void phanTichThuaSoNgTo(){
	int n;
	printf("Nhap N = ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("Hay nhap n < 1.");	
	}else{
		int i = 2;
		printf("%d = ", n);
		while(n > 1){
			if(n % i ==0 ){
				printf(" %d ", i);
				if(n != i){
					printf("x");	
				}
				n /= i;	 	
			}else{	
				i++;
			}			
		}
	}
}
 

void soHangNcuaFibonacci(){
	int n, i;
	int a, a1=1, a2 =1;
	printf("Nhap thu hang n = ");
	scanf("%d", &n);
	
	if(n == 1 || n == 2){
		printf("So hang thu %d cua day Fibonacci la: 1.", n);	
	}else{
		for (i = 3; i <= n; i++ ){
			a = a1 + a2;
			a1 = a2;
			a2 = a;
		}
		printf("So hang thu %d cua day Fibonacci la: %d", n, a);
	}
}


void soThuanNghich(){
	long n;
	printf("Nhap n > 0: ");
	scanf("%ld", &n );
	long dao = 0;
	long m = n;
	if( n < 0 ){
		printf("Hay nhap n > 0.");
	}else
		while( m > 0){
			dao = dao * 10 + m % 10;
			m /= 10;		
		}
		if(dao ==  n){
			printf("--> %d la so thuan ngich.\n", n);
		}else{
			printf("--> %d KHONG la so thuan ngich.\n", n);
		}

}


void lietKeSoChinhPhuong(){     //Nhap vào 2 so tu nhiên m < n. Hãy liet kê các so chính phuong trong khoang [m,n];
	int m,n;
	printf("Nhap hai so m,n sao cho m < n.\n");
	printf("So n = ");
	scanf("%d", &n);
	printf("So m = ");
	scanf("%d", &m);
	
	if(m < n && m >= 0){
		int i;
			printf("Cac so chinh phuong trong khoang[%d,%d] la: ", m, n);
		for( i = sqrt(m); i<= sqrt(n); i++){
			printf("%d  ", i*i);
		}
	}else{
		printf("Hay nhap m < n.\n");
	}

}



void tongCacChuSo(){
	long n;
	long sum;
	printf("Nhap so N= ");
	scanf("%ld", &n);
	
	if(n < 0){
		n *= -1;
	}
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Tong cac chu so cua %ld la : %ld", n , sum);

}


int main(){
	tongCacChuSo();
	phanTichThuaSoNgTo();
	
	return 0;

}
