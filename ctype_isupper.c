#include<stdio.h>
#include<ctype.h>

int main (){
	char ch;

	 printf(" nhap ky tu vao va kiem tra xem co phai chu Hoa khong?\n");
	 scanf("%c",&ch);
	 if(isupper(ch)){
	 	printf("%c la chu Hoa",ch);
	 }else{
	 	printf("%c khong phai la chu Hoa ",ch);
	 }
	return 0;
}