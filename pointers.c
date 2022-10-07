#include<stdio.h>

int main()
{
	// Depiction of pointers..
	int a = 10;
	int *b = &a;
	int **c = &b;
	printf("the value of a is %d\n", *b );
	printf("the add of a is %d\n", &a);
	printf("the value in add of a is %d\n", *(&a));
	printf("the value of b is %d\n", *(&b));
	printf("the value of add of b is %d\n", &b);

    return 0;
}
