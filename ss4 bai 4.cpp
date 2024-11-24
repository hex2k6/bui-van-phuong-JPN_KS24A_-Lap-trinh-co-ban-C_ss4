#include<stdio.h>
int main(){
	int month;
	printf("moi ban nhap thang");
	scanf("%d",&month);
	if(month ==1||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12){
		printf("thang ban nhap co 31 ngay");
	}
	else if(month ==4||month ==6||month ==9||month ==11){
		printf("thang ban nhap co 30 ngay");
	}
	if(month ==2){
		printf("thang ban nhap co 29 ngay");
	}
	else if(month>12 || month<1){
		printf("so thang ko hop le");
	}
	
	

	
	return 0;
	
	
}

