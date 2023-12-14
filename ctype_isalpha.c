#include <stdio.h>
#include <ctype.h>

int main(){
	char ch;
	printf("%c nhap ky tu:\n");
	scanf("%c",&ch);
	if(isalpha(ch)){
		printf("%c la 1 chu cai",ch);
		
	}
	else{
		printf("%c khong phai la chu cai",ch);
	}
	return 0;
}