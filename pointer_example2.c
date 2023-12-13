
#include<stdio.h>

void swap (int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return;
}

int main(){
	int x=20;
	int y=30;
	printf("gia tri ban dau cua x=%d and y=%d\n",x,y);
	swap(&x,&y);
	printf("gia tri sau khi hoan doi gia tri x=%d and y=%d\n",x,y);
}