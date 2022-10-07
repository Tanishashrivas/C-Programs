#include<stdio.h>
float average(int a,int b,int c);

int main(){
	int a,b,c;
	printf("enter a b and c\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("the value of average is %f\n", average(a,b,c));
	return 0;
}

float average(int a,int b,int c){
	float f;
	f = (float)(a + b + c)/3;
	return f;
}

