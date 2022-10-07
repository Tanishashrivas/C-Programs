#include<stdio.h>

int main(){
	int a,b,n;
	printf("enter the operands:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("enter your choice by pressing : \n 1 for addition,\n 2 for subtraction,\n 3 for multiplication,\n 4 for division\n");
	
	do{
		scanf("%d", &n);

	switch(n)
	{
		case 1:
		printf("%d + %d = %d\n", a,b,a+b);
		break;
		
		case 2:
		printf("%d - %d = %d\n", a,b,a-b);
		break;
		
		case 3:
		printf("%d x %d = %d\n", a,b,a*b);
		break;
		
		case 4:
		printf("%d / %d = %d\n", a,b, a/b);
		break;
		
		default:
		printf("enter a valid optiion!");
	}
}while(n>0 && n<5);
	return 0;
}
