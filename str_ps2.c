#include<stdio.h>

int main(){
	char st[45];
	printf("enter ur string\n");
	scanf("%s", &st);
	printf("%s", st);
	
	char ts[45];
	printf("enter 2nd string\n");
	scanf("%c", &ts);
	printf("%c\n", ts);
	
	if(st==ts){
	printf("strings are equal\n");
	}
	else
	{
		printf("strings aren't equal\n");
	}
	return 0;
}
