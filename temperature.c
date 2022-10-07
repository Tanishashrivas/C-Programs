#include<stdio.h>
float convert(int c);

int main(){
	int c;
	printf("enter c\n");
	scanf("%d", &c);
	printf("the value of fahrenheit is %f\n", convert(c));
	return 0;
}

float convert(int c){
	float f;
	f = (float)((c * 9/5) + 32);
	return f;
}
