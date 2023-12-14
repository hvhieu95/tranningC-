#include<stdio.h>
#include<ctype.h>
int main(){
char ch1='H';
char ch2=' ';
char ch3='$';

if (isgraph(ch1)){
	printf("%c la ky tu in duoc \n",ch1);
}else{
	printf("%c khong phai la ky tu in duoc\n",ch1);

}

if (isgraph(ch2)){
	printf("%c la ky tu in duoc \n",ch2);
}else{
	printf("%c khong phai la ky tu in duoc \n",ch2);

}

if (isgraph(ch3)){
	printf("%c la ky tu in duoc \n",ch3);
}else{
	printf("%c khong phai la ky tu in duoc \n",ch3);


}
return 0;
}
