#include<stdio.h>
int factorial(int x);

int main(){
	int n;
	printf("enter the number n\n");
	scanf("%d", &n);
	printf("the value of factorial %d is %d\n", n, factorial(n));
	return 0;
}

int factorial(int x){
	printf("calling factorial %d\n", x);
	
	if(x==0 || x==1){
		return 1;
	}
	else{
		return x * factorial(x-1)
		;}
}
