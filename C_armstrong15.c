#include<stdio.h>

int main(){
	int n,r,sum=0,temp;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	temp=n;
	while(n>0){
		r=n%10;
		sum= sum+(r*r*r);
		n=n/10;
	}
	
	if(sum==temp){
		printf("The number %d is armstrong\n", temp);
   }
else{
	printf("The number %d is not armstrong\n", temp);
}
return 0;
}
