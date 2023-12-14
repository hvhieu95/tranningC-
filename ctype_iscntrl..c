#include<stdio.h>
#include <ctype.h>

int main(){
	char ch1='\n';

	char ch2='A';
	printf("kiem tra xem co phai la ky tu dieu khien khong");
	if(iscntrl(ch1)){
		printf("\n ky tu '\\n' la mot ky tu dieu khien");
}
else{
	printf("\n ky tu '\\n' khong phai la ky tu dieu khien");
}
	if(iscntrl(ch2)){
		printf("\n ky tu '%c' la mot ky tu dieu khien",ch2);
}
else{
	printf("\n ky tu '%c' khong phai la ky tu dieu khien",ch2);
}




	}
	