#include<stdio.h>

int main(){
	int c, b, a;
	c = sum(a, b);
	printf("enter the numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("the value of sum is %d\n", a + b);
	return 0;
}

int sum(int a , int b){
	int c;
	c = a + b;
}
