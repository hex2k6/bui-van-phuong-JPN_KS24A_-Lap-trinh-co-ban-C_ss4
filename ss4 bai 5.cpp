#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("moi ban nhap so nguyen tu nhat ");
	scanf("%d",&number1);
	printf("so nguyen thu nhat =%d\n",number1);
	printf("moi ban nhap so nguyen tu 2 ");
	scanf("%d",&number2);
	printf("so nguyen thu nhat =%d\n",number2);
	printf("moi ban nhap so nguyen tu 3 ");
	scanf("%d",&number3);
	printf("so nguyen thu nhat =%d\n",number3);
	
	if(number3<number1 && number3>number2||number3>number1 && number3<number2){
		printf("so thu 3 thuoc khoang so thu nhat va so thu 2");
	}
	else{
		printf("so thu 3 ko thuoc khoang so thu nhat va son thu 2");
	}
	
	
	return 0;
	
	
}

