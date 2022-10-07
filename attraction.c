#include<stdio.h>
float calculate(float f);

int main(){
	int m, w, r;
	float f;
	printf("enter m, w and r\n");
	scanf("%d", &m);
	scanf("%d", &w);
	scanf("%d", &r);
	printf("the value of force of attraction is %f\n", calculate(f));
	return 0;
}

float calculate(float f){
	float F;
	int m, w, r;
	float g = 9.8;
	F = (float)((g * m* w)/( r * r));
	return F;
}

