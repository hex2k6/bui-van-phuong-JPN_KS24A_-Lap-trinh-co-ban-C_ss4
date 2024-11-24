#include<stdio.h>
int main(){
	int canh1,canh2,canh3;
	printf("moi ban nhap canh 1  ");
	scanf("%d",&canh1);
	printf("moi ban nhap canh 2  ");
	scanf("%d",&canh2);
	printf("moi ban nhap canh 3  ");
	scanf("%d",&canh3);
	
	if(canh1 + canh2 >canh3 && canh1 + canh3 >canh2 && canh2 + canh3 > canh1){
		printf("la 3 canh tam giac");
	}
	else{
		printf("ko phai 3 canh tam giac");
	}

	
	return 0;
	
	
}

