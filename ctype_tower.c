#include <stdio.h>
#include<ctype.h>

int main(){
	char c;
	printf("hay nhap mot chu Hoa bat ky de chuyen chu Hoa sang chu thuong: \n");
	scanf("%c",&c);
	printf("%c -> %c",c,tolower(c));
	return 0;
}