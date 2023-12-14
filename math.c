#include<stdio.h>
#include<math.h>

int main(){
	double num,sqrtN,powN,logN,sinN,cosN;
	printf("hay nhap mot so: ");
	scanf("%lf",&num);
	
	sqrtN=sqrt(fabs(num));
	powN=pow(num,2);
	logN=log(fabs(num));
	sinN=sin(num);
	cosN=cos(num);

printf("can bac 2 la:%f\n",sqrtN);
printf("luy thua bac 2 la: %f\n",powN);
printf("logarit tu nhien la:%f\n",logN);
printf("sin la:%f\n",sinN);
printf("cos la:%f\n",cosN);
return 0;
}
