#include<stdio.h>

int main(){
    // factorial(4) - 1 * 2 * 3 * 4 
    // factorial(6) - 1 * 2 * 3 * 4 * 5 * 6
    int i=1, n=7, factorial=1;
    while(i<=n){
    	factorial *=i;
    	i++;
	}
    printf("The value of factorial %d is %d", n, factorial);
    return 0;
}
