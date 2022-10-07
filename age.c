#include<stdio.h>

int main()
{
	// C programme to figure out diff age eligibility
	int age;
	printf("enter your age\n");
	scanf("%d", &age);
	
	if(age>=25 && age<50){
		printf("you are under silver zone\n", age);
	}
	else if(age<25){
		printf("kiddo\n", age);
	}
	if(age>=50 && age<75){
		printf("you are under gold zone\n", age);
	}
	if(age>=75 && age<100){
		printf("you are under diamond zone\n", age);
	}
	else if(age>100){
	printf("you are dead\n", age);
}
	return 0;
}
