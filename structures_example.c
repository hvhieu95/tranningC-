#include <stdio.h>
#include <string.h>

// khai bao cau truc
struct Member
{
	char first_name[20];
	char last_name[20];
	int number;
	double point;
};

int main (){
	// tao bien
struct Member Member1, Member2;
 
 // gan gia tri cho bien va truyen gia tri
 strcpy(Member1.first_name,"hoang");
 strcpy(Member1.last_name,"hieu");
 Member1.number=10;
 Member1.point=100;
 
 strcpy(Member2.first_name,"le");
 strcpy(Member2.last_name,"hoa");
 Member2.number=11;
 Member2.point=99;
 
 // in ra gia tri cac bien
 
 printf("Member 1 :\n");
 printf("first Name: %s\n",Member1.first_name);
 printf("Last Name: %s\n",Member1.last_name);
 printf("number: %d\n",Member1.number);
 printf("point: %5.2f\n",Member1.point);
 
  
 printf("Member 2 :\n");
 printf("first Name: %s\n",Member2.first_name);
 printf("Last Name: %s\n",Member2.last_name);
 printf("number: %d\n",Member2.number);
 printf("point: %5.2f\n",Member2.point);
 
 return 0;
}