#include<stdio.h>
int main(){
	int i,n, fac=1;
	
	printf("enter the number :");
	scanf("%d", &n);
	
	if(n<0){
		printf("invalid output");
	}
	else{
		for(i=1;i<=n;i++){
			 fac*=i;
		}
		printf("factorial of %d is %d\n",n, fac);
	}
	return 0;
}
