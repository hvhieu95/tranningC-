#include<stdio.h>
#include<string.h>

int main(){
	char my_name1[20]="hoang hieu";
	char my_name2[20]="HOANG HIEU";
	printf(" ten truoc khi chuyen: \n");
	
	printf("ten tui la = %s \n",my_name1);
	printf("ten tui la = %s \n",my_name2);
	
	printf("ten sau khi chuyen: \n");
	
	strcpy(my_name1,my_name2);
	
	printf("ten tui la = %s \n",my_name1);
	printf("ten tui la = %s \n",my_name2);

	return 0;
}
