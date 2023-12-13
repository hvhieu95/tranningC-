#include <stdio.h>

int* max(int *a, int *b) {
	if(*a > *b){
		return a;
	}else{
		return b;
	}
	
	
} 

int  main(){
	
	int x= 100,y=150;
	int *ptr;
	printf("so ban dau la:x=%d , y =%d\n",x,y);
	ptr= max(&x,&y);
	printf("gia tri lon nhat giua 2 so la:%d",*ptr);
	return 0;
}