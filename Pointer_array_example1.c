#include <stdio.h>


int main(){
	int i,*ptr,tong=0;
	int nums[5]={1,2,3,4,5};

	for (ptr=nums;ptr<&nums[5];ptr++){
		tong+=*ptr;

	}
			printf("tong cac so trong mang co gia tri la:%d\n",tong);
	return 0;
}