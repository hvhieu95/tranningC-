#include<stdio.h>
#include<ctype.h>

int main (){
	char ch;

	 printf(" kiem tra xem ky tu co phai la dau cau khong?\n");
	 scanf("%c",&ch);
	 if(ispunct(ch)){
	 	printf("%c la dau cau",ch);
	 }else{
	 	printf("%c khong phai la dau cau",ch);
	 }
	return 0;
}