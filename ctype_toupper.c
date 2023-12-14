#include <stdio.h>
#include<ctype.h>

int main(){
	char c;
	printf("hay nhap mot chu thuong bat ky de chuyen sang chu Hoa: \n");
	scanf("%c",&c);
	printf("%c -> %c",c,toupper(c));
	return 0;
}