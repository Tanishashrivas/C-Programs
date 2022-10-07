#include<stdio.h>

int main()
{
int i;
int sum;
int n;
printf("enter n\n");
scanf("%d", &n);
for(i=1; i<11; i++){
	printf("%d x %d is %d\n",n ,i , n*i);
 sum +=(i*n);	
}
	printf("%d", sum);
	return 0;
}
