#include<stdio.h>
int main(){
	int number;
	printf("moi nhap vao 1 so "); 
	
	scanf("%d",&number);
	
	if(number>0){
		printf("so ban nhap la so duong\n");
	}
    else if(number<0){
		printf("so ban nhap la so am");
	}
	else{
		printf("so ban nhap ko am cung ko duong");
	}
	
	
	return 0;
	
	
}

