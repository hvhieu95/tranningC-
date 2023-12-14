#include<stdio.h>
#include<ctype.h>

int main (){
	char ch;

	 printf(" input ky tu bat ky de kiem tra?\n");
	 scanf("%c",&ch);
	 if(isxdigit(ch)){
	 	printf("%c la ky tu thap luc phan",ch);
	 }else{
	 	printf("%c khong phai la ky tu thap luc phan ",ch);
	 }
	return 0;
}