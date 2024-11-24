#include<stdio.h>
int main(){
	int number;
	printf("moi nhap vao 1 so nguyen "); 
	
	scanf("%d",&number);
	
	if(number % 3 ==0&& number % 5 ==0){
		printf("so ban nhap chia het cho ca 3 va 5");
	}
    else if(number % 5 ==0){
		printf("so ban nhap chia het cho 5");
	}
	if(number % 3 ==0){ 
	printf("so ban nhap chia het cho 3");
	}
	else{
		printf(" so ban nhap ko chia het cho ca 3 va 5");
	}
	
	
	return 0;
	
}
