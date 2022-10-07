#include<stdio.h>

int main(){
	float tax, income;
	 printf("enter your income\n");
	 scanf("%f", income);
	 
	if((income >=250000) && (income<500000)){
	 tax = 0.05 * (income - 250000);
	  printf("tax amount is %f", tax);
}
else if ((income >=500000) && (income< 1000000)){
	
	tax = 0.10 * (income - 250000);
	 printf("tax amount is %f", tax);
}
else if (income>=1000000){
	tax = 1.5 * (income - 250000);
	 printf("tax amount is %f", tax);
}
return 0;	 
}
