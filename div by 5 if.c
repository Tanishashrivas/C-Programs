#include<stdio.h>
int main()
{
// program to check whether a number is divisible by 5
int a;
printf("enter the number\n");
scanf("%d", &a);
  
if(a%5==0){
	printf("the number is divisible by 5\n",a);
}
else{ 
printf("the number isnt divisible by 5\n", a);
}
return 0;
}
