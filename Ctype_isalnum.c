#include <stdio.h>
#include <ctype.h>

int main(){
	char ch;
	printf("nhap vao mot ky tu:\n");
	scanf("%c",&ch);
	printf("kiem tra xem so da input co phai la chu cai khong");
	if (isalnum(ch)){
			printf("\n%c la mot ky tu",ch);
	}

	else{
			printf("\n%c khong phai la mot ky tu",ch);
	}

	return 0;
}