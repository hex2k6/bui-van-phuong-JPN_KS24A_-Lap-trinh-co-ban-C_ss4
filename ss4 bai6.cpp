#include<stdio.h>
int main(){
	float soDienTruoc,soDienSau,soDienDung,soTienDien,giaDien;
	printf("moi nhap so dien truoc");
	scanf("%f",&soDienTruoc);
	printf("moi nhap so dien sau");
	scanf("%f",&soDienSau);
	
	soDienDung = soDienSau - soDienTruoc;
	
	 if(soDienDung>=0 && soDienDung<50){
	 	printf("1 so dien = 10000\n");
	 }
	 if(soDienDung>=50 && soDienDung<100){
	 	printf("1 so dien = 15000\n");
	 }
	 if(soDienDung>=100 && soDienDung<150){
	 	printf("1 so dien = 20000\n");
	 }
	 if(soDienDung>=150 && soDienDung<200){
	 	printf("1 so dien = 25000\n");
	 }
	 if(soDienDung>=200){
	 	printf("1 so dien = 30000\n");
	 }
	 printf("moi ban nhap gia dien");
	 	scanf("%f",&giaDien);
	
	soTienDien = soDienDung * giaDien;
	
	printf("so tien dien =%f\n",soTienDien);

	
	return 0;
	
	
}

