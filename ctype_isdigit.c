#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	
	printf("nhap vao mot ky tu:\n");
	scanf("%c",&c);
	if(isdigit(c)){
		printf("%c la digit",c);
	}
	else{
		printf("%c khong phai la digit",c);
	}
	return 0;
}