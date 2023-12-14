#include<stdio.h>
#include<ctype.h>

int main (){
	char ch;

	 printf(" kiem tra xem ky tu nhap vao co phai la chu thuong khong?\n");
	 scanf("%c",&ch);
	 if(islower(ch)){
	 	printf("%c la chu thuong",ch);
	 }else{
	 	printf("%c khong phai la chu thuong",ch);
	 }
	return 0;
}