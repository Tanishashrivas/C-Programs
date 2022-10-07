#include<stdio.h>

int main()
{
	int n;
	printf("enter the value of n\n", n);
	scanf("%d", &n);
	
	while(n<40){
		printf("%d\n", n);
		n++;
	}
	
	return 0;
}
