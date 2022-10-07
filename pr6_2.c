#include<stdio.h>

void printadd(int a){
	printf("the address of this variable is %u\n", &a);
}

int main()
{
	int i = 5;
	printf("the value of i is %d\n", i);
	printadd(i);
	printf("the address of i is %u\n", &i);
	return 0;
}
