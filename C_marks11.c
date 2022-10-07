#include<stdio.h>

int main()
{
	int english , maths, science, social, computer;
	float total, per;
	
	printf("enter your marks in english\n", english);
	scanf("%d", &english);
	
	printf("enter your marks in maths\n", maths);
	scanf("%d", &maths);
	
	printf("enter your marks in science\n", science);
	scanf("%d", &science);
	
	printf("enter your marks in social\n", social);
	scanf("%d",&social);
	
	printf("enter your marks in computer\n", computer);
	scanf("%d", &computer);
	
	total= (float)(english + maths + science + social + computer);
	printf("Your total marks out of 500 are :%f\n", total);
	
	per= (english + maths + science + social + computer)/5;
	
		if((per<40) || english<33 || maths<33 || science<33 || social<33 || computer<33){
	printf("your total percentage is %f and you are failed", per);
	} 
	else {
	 printf("your total percentage is %f and you are passed", per);
	}
	return 0;
}
	
