#include<stdio.h>

int main()
{
	int marks[4];
	printf("enter the marks 1, 2, 3, 4, 5, %d, %d, %d, %d, %d\n", marks[0],  marks[1] ,  marks[2],  marks[3]);
	scanf("%d", &marks[0]);
	scanf("%d", &marks[1]);
	scanf("%d", &marks[2]);
	scanf("%d", &marks[3]);
//	scanf("%d", &marks[5]);
    printf("your inputs are %d, %d, %d, %d, %d\n", marks[0],  marks[1] ,  marks[2],  marks[3]);
	return 0;
}
