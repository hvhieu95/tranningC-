#include<stdio.h>
#include<ctype.h>

int main (){
	char ch;

	 printf(" kiem tra xem ky tu nhap vao co phai la khoang trang hay khong?\n");
	 scanf("%c",&ch);
	 if(isspace(ch)){
	 	printf("%c la khoang trang",ch);
	 }else{
	 	printf("%c khong phai la khoang trang",ch);
	 }
	return 0;
}