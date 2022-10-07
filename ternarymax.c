#include<stdio.h>

int main(){
	int a,b,c,max;
	printf("enter a,b and c:\n");
	scanf("%d\n" "%d\n""%d", &a, &b, &c);
	
//	max=(a>b)?a:b;
//	printf("\n %d is maximum\n", max);
	
	//for 3 numbers
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("\n %d is maximum\n", max);
	return 0;
}
