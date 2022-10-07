#include<stdio.h>
int sum(int n);

int main(){
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("sum is %d\n", sum(n));
    return 0;
}

int sum(int n){
	if(n!=0){
		return n + sum(n-1);
	}
	else{
		return n;
	}
}
