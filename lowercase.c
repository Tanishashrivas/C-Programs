#include<stdio.h>

int main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c", &ch);
//	97-122 = a-z ASCII Values

if((ch >=97) && (ch <=122)){
	printf("the character is lowercase");
}
else {
	printf("the character isnt lowercase");
}
return 0;
}
