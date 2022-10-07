 #include<stdio.h>
#include <string.h>

int main(){
    char *st[45];
//    char st[45];
//	scanf("%s", &st);
	printf("%s", *st);
	gets(*st);
	puts(*st);
    int a = strlen(st);
    printf("The length of string st is %d", a);
    return 0;
}
