#include<stdio.h>

void TOH(int n,char a,char b,char c){
	if(n>0){
		TOH(n-1,a,c,b);
		printf("\n %d %c to %c",n, a, c);
		TOH(n-1,b,a,c);
	}
}

int main(){
	int n=3;
	TOH(n,'A','B','C');
	return 0;
}
