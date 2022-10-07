#include<stdio.h>

int main()
{
	int a, b, c, d;
	printf("enter the numbers\n", a, b, c, d);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	if((a>b) && a>c && a>d){
		printf("a is the greatest");
	}
	else if((b>c) && b>d && b>a){
		printf("b is the greatest");
	}
	else if((c>d) && c>b && c>a){
		printf("c is the greatest");
	}
	else{
		printf("d is the greatest");
	}
	return 0;
}
