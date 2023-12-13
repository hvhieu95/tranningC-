#include <stdio.h>

void test(int x,int *ptr){
	x=x+5;
	*ptr=*ptr*5;
	return;
}

int main (void){
	int a=10,b=20;
	printf("gia tri cua a: %d and b=%d\n",a,b);
	test(a,&b);
	printf("sau khi goi ham test: a=%d,b=%d\n",a,b);
	return 0;
}