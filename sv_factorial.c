#include<stdio.h>

int main(){
	int fac=1,n;
	printf("enter n\n");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
	    fac*= i;
	}
	printf("factorial of %d is %d\n", n, fac);
	return 0;
}
