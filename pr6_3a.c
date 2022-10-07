#include<stdio.h>
void change(int *c, int*d);


int main(){
	int a = 5;
	int b = 10;
	printf("the value of a is %d\n", a);
	printf("the value of b is %d\n", b);
	change(&a, &b);
	printf("the value of a after change is %d\n", a);
	printf("the value of b after change is %d\n", b);
	return 0;
}

void change(int *c, int *d){
	int ch = *c;
    *c = 50;
	int dh = *d;
	*d = 100;
}
