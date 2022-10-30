#include <stdio.h>
#include <math.h>

int main(){
	int menu;
	do{		
		printf("\t        <--------------CHO MENU---------------->\n");
		printf("=================================================================================\n");
		printf(" 1. Chuong trinh nhap vao so nguyen duong, in thong bao so chan le. \n");
		printf(" 2. Chuong trinh nhap vao 4 so nguyen, in ra so lon nhat. \n");
		printf(" 3. Giai phuong trinh bac 2.\n");
		printf(" 4. Chuong trinh nhap vao thang, in ra thang do bao nhieu ngay.\n");
		printf(" 5. Chuong trinh KEO-BUA-BAO.\n");
		printf(" 6. Chuong tinh xac dinh bien color, in ra thong bao.\n");
		printf(" 7. Toan tu hai so x, y.\n");
		printf(" 8. Chuong trinh diem 3 mon TOAN, LY, HOA.\n");
		printf(" 9. Chuong trinh nhap vao ngay,thang,nam , cho biet do la thu may trong tuan.\n");
		printf(" 10. Chuong trinh nhap so gio lam va luong, tinh tong tien nhan duoc.\n");
		printf(" 11. Chuong trinh kiem tra 3 canh tam giac va tinh dien tich.\n");
		printf(" 12. Chuong trinh nhp vao 3 so nguyen, in ra thu tu tang dan.\n");
		printf(" 13. Tinh tien dien.\n");
		printf("=====================================================================================\n");
		
		
		
		printf("Moi ban chon menu: ");
		fflush(stdin);
		scanf("%d", &menu);
		printf("-------------------------------------------------------------------------------------\n");
		
		switch(menu){
			int w;
			case 1:
				//Chuong trinh nhap vao so nguyen duong, in thong bao so chan le.
				printf("Nhap so nguyen x: ");
				scanf("%d", &w);
				
				if(w % 2 == 0){
					printf("---> %d la so chan.\n", w);
				}else{
					printf("---> %d la so le.\n", w);
				}
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;
				
			int a1, b1, c1, d1;	
			int x1, y1;
			case 2:
				//	Chuong trinh nhap vao 4 so nguyen, in ra so lon nhat.
				printf("Enter a: ");
				scanf("%d", &a1);
				printf("Enter b: ");
				scanf("%d", &b1);
				printf("Enter c: ");
				scanf("%d", &c1);
				printf("Enter d: ");
				scanf("%d", &d1);
								
				if(a1 > b1){
					x1 = a1;
				}else
					x1 = b1;
				if(c1 > d1){
					y1 = c1;
				}else
					y1 = d1;
				if(x1 > y1){
					printf("---> %d la so lon nhat.\n", x1);
				}else
					printf("---> %d la so lon nhat.\n", y1);	
								
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");				
				getch();
				system("cls");
				break;
				
			float k, m, n, delta;
			case 3:
				//Giai phuong trinh bac 2
				printf("Enter a: ");
				scanf("%f", &k);
				printf("Enter b: ");
				scanf("%f", &m);
				printf("Enter c: ");
				scanf("%f", &n);
												
				if(k == 0){
					if(m == 0 && n == 0){
						printf("---> Phuong trinh vo dinh.\n");
					}else if(m == 0 && n != 0){
						printf("---> Phuong trinh vo nghiem.\n");
					}else{
						printf("---> Phuong trinh co nghiem X =  %.1f\n", -m/n);
					}
				}else if (k != 0){
					delta = m*m - 4*k*n;
					if(delta < 0){
						printf("---> Phuong trinh vo nghiem.\n");
					}else if(delta == 0){
						printf("---> Phuong trinh co nghiem kep X = %.1f\n", -m/(2*k));
					}else{
						printf("--- >Phuong trinh co 2 nghiem: \n X1 = %.1f.\n X2 = %.1f.\n",(- m - sqrt(delta))/(2*k), (- m + sqrt(delta))/(2*k));
					}												
				}
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;
				
			int thang;
			int nam;
			case 4: 
				//Chuong trinh nhap vao thang, in ra thang do bao nhieu ngay
				do{				
					printf("Nhap thang cua ban: ");
					fflush(stdin);
					scanf("%d", &thang);
					
					switch(thang){
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12:
							printf("---> Thang %d co 30 ngay.\n", thang);
							break;
						case 4:
						case 6:
						case 9:
						case 11:
							printf("---> Thang %d co 30 ngay.\n", thang);
							break;
						case 2: 
							printf("Nam cua ban la nam nhuan hay khong? \n");
							printf("Nhap so nam cua ban: ");
							scanf("%d", &nam);
							
							if(nam % 400 == 0 || nam % 4 == 0 &&  nam % 100 != 0){
								printf("---> Nam %d la nam nhuan.\n Thang %d co 29 ngay.\n", nam, thang);							
							}else{
								printf("---> Nam %d khong phai nam nhuan.\n---> Thang %d co 28 ngay.\n", nam, thang);
							}
							break;
						default:
							printf("Ban hay nhap so thang tu 0-->12.\n");	
					}
				}while(thang < 0 || thang > 12);
					
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			char  nC1 , nC2;	
			case 5:
				//Chuong trinh KEO-BUA-BAO										
					printf("----One-Two-Three ra cai gi ra cai nay ?-----\n");
					printf("   KEO \n   BUA \n   GIAY\n");
					printf("-Nguoi choi 1 chon : ");
					fflush(stdin);
					scanf("%c", &nC1);
					printf("-Nguoi choi 2 chon : ");
					fflush(stdin);
					scanf("%c", &nC2);
					
					switch(nC1){
						case 'k':
						case 'K':
							printf(">>>>Nguoi choi 1 chon KEO.\n");
							switch(nC2){						
								case 'k':
								case 'K':
									printf(">>>>Nguoi choi 2 chon KEO.\n");
									printf("====> DICKENS.\n");
									break;
								case 'b':
								case 'B':
									printf(">>>>Nguoi choi 2 chon BUA.\n");
									printf("====> Nguoi choi 2 WIN.\n");
									break;	
								case 'g':
								case 'G':
									printf(">>>>Nguoi choi 2 chon GIAY.\n");
									printf("====> Nguoi choi 1 WIN.\n");
							}										
							break;
							
						case 'b':
						case 'B':
							printf(">>>>Nguoi choi 1 chon BUA.\n");
							switch(nC2){						
								case 'k':
								case 'K':
									printf(">>>>Nguoi choi 2 chon KEO.\n");
									printf("====> Nguoi choi 1 WIN.\n");
									break;
								case 'b':
								case 'B':
									printf(">>>>Nguoi choi 2 chon BUA.\n");
									printf("====> DICKENS.\n");
									break;	
								case 'g':
								case 'G':
									printf(">>>>Nguoi choi 2 chon GIAY.\n");
									printf("====> Nguoi choi 2 WIN.\n");
							}												
							break;
						
						case 'g':
						case 'G':
							printf(">>>>>Nguoi choi 1 chon GIAY.\n");
							switch(nC2){						
								case 'k':
								case 'K':
									printf(">>>>Nguoi choi 2 chon KEO.\n");
									printf("====> Nguoi choi 2 WIN.\n");
									break;
								case 'b':
								case 'B':
									printf(">>>>Nguoi choi 2 chon BUA.\n");
									printf("====> Nguoi choi 1 WIN.\n");
									break;	
								case 'g':
								case 'G':
									printf(">>>>Nguoi choi 2 chon GIAY.\n");
									printf("====> DICKENS.\n");
							}											
							break;
						
						default:
						
							printf("Hay chon dung KEO, BUA, GIAY.\n");
							break;
					}
													
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			char mau;	
			case 6:
				//Chuong tinh xac dinh bien color, in ra thong bao
				printf("Nhap ma mau ( a-->z ): ");
				fflush(stdin);
				scanf("%c", &mau);
				
				switch(mau){
					case 'r':
					case 'R':
						printf("----> RED.\n");
						break;
					case 'g':
					case 'G':
						printf("----> GREEN.\n");
						break;
					case 'b':
					case 'B':
						printf("----> BLUE.\n")	;
						break;
					default:
						printf("----> BLACK.\n");
						break;											
				}
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");			
				getch();
				system("cls");
				break;
					
			float p ,q;	
			char toanTu;
			case 7:
				//Toan tu hai so x, y
				printf("Nhap X = ");
				fflush(stdin);
				scanf("%f", &p);
				printf("Nhap Y = ");
				fflush(stdin);
				scanf("%f", &q);
				printf("Hay chon toan tu: ");
				fflush(stdin);
				scanf("%c", &toanTu);
				
				switch(toanTu){
					case '+':
						printf("---> X + Y = %.1f\n", p+q);
						break;
					case '-':
						printf("---> X - Y = %.1f\n", p-q);
						break;	
					case '*':
						printf("---> X * Y = %.1f\n", p*q);
						break;
					case '/':
						if(q == 0){
							printf("Khong co phep chia cho 0.\n");
						}else{
							printf("---> X / Y = %.1f\n", p/q);
							break;
						}										
					default:
						printf("Ban hay chon 1 trong 4 toan tu (+,-,*,/).\n");	
						
				}				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			float toan, ly, hoa;
			float tongDiem;	
			case 8:
				//Chuong trinh diem 3 mon TOAN, LY, HOA
				printf("Nhap diem mon Toan: ");
				scanf("%f", &toan);
				printf("Nhap diem mon Ly: ");
				scanf("%f", &ly);
				printf("Nhap diem mon Hoa: ");
				scanf("%f", &hoa);
				
				tongDiem = toan + ly + hoa;
				printf(">>> Tong diem cua ban la: %.1f\n", tongDiem);
				
				if(tongDiem >= 15){
					if(toan > 4 && ly > 4 && hoa > 4){
						printf("---> Ban da DAU.\n");
							if(toan > 5 && ly > 5 && hoa > 5){
								printf("---> Hoc deu cac mon.\n");
							}else{
								printf("---> Hoc CHUA deu cac mon.\n");
							}
						}
				}else{
					printf("---> Ban thi TRUOT.\n");
				}					
														
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
				
			case 9:
				//Chuong trinh nhap vao ngay,thang,nam , cho biet do la thu may trong tuan
				
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;
					
			float soGio, luongGio, tongLuong;		
			case 10:			
				//Chuong trinh nhap so gio lam va luong, tinh tong tien nhan duoc
				printf("Nhap so gio lam: ");
				scanf("%f", &soGio);
				printf("Nhap so luong/gio : ");
				scanf("%f", &luongGio);								
				
				if(soGio > 40){
					tongLuong = 40*luongGio + (soGio - 40)*luongGio*1.5;
					printf("---> Tong luong cua ban sau %.0f gio lam la: %.0f dong.\n", soGio, tongLuong);
				}else{
					tongLuong = soGio * luongGio;
					printf("---> Tong luong cua ban sau %.0f gio lam la: %.0f dong.\n", soGio, tongLuong);
				}
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
				
			int canhA, canhB, canhC;
			float P, S;	
		
			case 11:
				//Chuong trinh kiem tra 3 canh tam giac va tinh dien tich
				printf("Nhap canh A: ");
				scanf("%d", &canhA);
				printf("Nhap canh B: ");
				scanf("%d", &canhB);
				printf("Nhap canh C: ");
				scanf("%d", &canhC);				
				
				if((canhA+canhB) > canhC && (canhA+canhC) > canhB && (canhB+canhC) > canhA){
					P = (canhA+canhB+canhC)/2;
					S = sqrt(P*(P-canhA)*(P-canhB)*(P-canhC));
					printf("---> S tam giac = %.1f\n", S);
				}else{
					printf("---> Ba canh khong phai la 1 tam giac.\n");
				}
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;	
			
			int so1, so2, so3, temp;
			case 12:
				//Chuong trinh nhp vao 3 so nguyen, in ra thu tu tang dan
				printf("Nhap so 1: ");
				scanf("%d", &so1);
				printf("Nhap so 2: ");
				scanf("%d", &so2);
				printf("Nhap so 3: ");
				scanf("%d", &so3);
				
				if (so1 > so2){
					temp = so1;
					so1 = so2;
					so2 = temp;	
				}
				if (so1  > so3){
					temp = so1;
					so1 = so3;
					so3 = temp;				
				}			
				if(so2 > so3){
					temp = so2;
					so2 = so3;
					so3 = temp;							
				}
				printf("--> Thu tu tang dan la: %d, %d, %d \n", so1, so2, so3);
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;
				
					
			int chiSoCu, chiSoMoi;
			int luongDienSd;
			int phanDinhMuc, phanVuotDinhMuc;
			int giaVuotDinhMuc;	
			int tienTraDinhMuc;	
			int tienTraVuotDinhMuc;	
			int tong_tien;
			case 13:
				//Tinh tien dien
				printf("Nhap so dien cu(Kw): ");
				scanf("%d", &chiSoCu);
				printf("Nhap so dien moi(Kw): ");
				scanf("%d", &chiSoMoi);
				
				luongDienSd = chiSoMoi - chiSoCu;
				
				if(luongDienSd > 50){
					phanDinhMuc = 50;
					phanVuotDinhMuc = luongDienSd - 50;
				}else{
					phanVuotDinhMuc = 0;
					phanDinhMuc = luongDienSd;
				}

				
				if(phanVuotDinhMuc <= 50){   // Kw
					giaVuotDinhMuc = 480;   // Dong
				}else if(phanVuotDinhMuc > 50 && phanVuotDinhMuc < 100){
					giaVuotDinhMuc = 700;
				}else{
					giaVuotDinhMuc = 900;
				}
				
				tienTraDinhMuc = phanDinhMuc * 230;
				tienTraVuotDinhMuc = phanVuotDinhMuc * giaVuotDinhMuc;
				tong_tien = tienTraDinhMuc + tienTraVuotDinhMuc + 1000;
				
				printf("---> Chi so cu : %d Kw.\n",chiSoCu );
				printf("---> Chi so moi : %d Kw.\n",chiSoMoi );
				printf(">>>> Tien tra dinh muc: %d dong.\n",tienTraDinhMuc );
				printf(">>>> Tien tra vuot dinh muc: %d dong.\n",tienTraVuotDinhMuc );
				printf(">>>> Tong tien = %d dong.\n",tong_tien );
				
				printf("-------------------------------------------------------------------------------------\n");
				printf("Bam ENTER de tiep tuc chuong trinh...\n");
				getch();
				system("cls");
				break;			
				
			default:
				system("cls");
				printf("Ban da nhap sai mneu, bam ENTER de nhap lai...\n");
				getch();
				break;				
		}
  	}while(1);
	
	return 0;
}
