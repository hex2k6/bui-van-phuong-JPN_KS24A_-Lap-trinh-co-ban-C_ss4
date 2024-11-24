#include<stdio.h>
int main(){
	int year;
	printf("moi ban nhap nam");
	scanf("%d",&year);
	
	if(year % 4 ==0 && year % 100 !=0){
		printf("day la nam nhuan");
	}
	else if(year % 400 ==0){
		printf("day la nam nhuan");
	}
	else{
		printf("day ko phai nam nhuan");
	}

	
	return 0;
	
	
}

