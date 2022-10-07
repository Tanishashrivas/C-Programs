#include<stdio.h>

int main()
{
	printf("multiplication table of n, enter n");
	int n, i;
	scanf("%d", &n);
	for(i=1;i<11;i++){
		printf("%d x %d is  %d\n", n, i, n*i);
	}
	return 0;
}
