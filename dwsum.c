#include<stdio.h>

int main()
{
int i=0, sum, n=10;
do{
	sum +=i;
	i++;
}while(i<=n);
printf("sum of n numbers is %d", sum);
	return 0;
}
