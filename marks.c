#include<stdio.h>

int main()
{
	int english , maths, science;
	float total;
	
	printf("enter your marks in english\n", english);
	scanf("%d", &english);
	
	printf("enter your marks in maths\n", maths);
	scanf("%d", &maths);
	
	printf("enter your marks in science\n", science);
	scanf("%d", &science);
	
	total = (english + maths + science)/3;
	
	if((total<40) || english<33 || maths<33 || science<33 ){
	printf("your total percentage is %f and you are failed", total);
	} 
	else {
	 printf("your total percentage is %f and you are passed", total);
	}
	return 0;
}
