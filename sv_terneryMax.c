#include<stdio.h>

int main(){
	int x,a,b,c;
	printf("enter a,b and c\n");
	scanf("%d\n""%d\n""%d",&a, &b, &c);
	
	printf("maximum number is ");
	x = (a>b)?a:b;
	x = (b>c)?b:c;
	x = (c>a)?c:a;
	return 0;
}
