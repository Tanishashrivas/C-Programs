#include<stdio.h>
#include<string.h>

int main(){
//	char st[]="MUSKAN";
char st[]={'M','U','S','K','A','N','\0'};
char ts[]="-chouhan";
char *ptr=st;
	
	while(*ptr!='\0'){
		printf("%c", *ptr);
		ptr++;
	}
	int l= strlen(st);
//	strcpy(ts, st);
	printf("\n The length of the string is %d\n", l);
//	printf("now ts is %s\n", ts);
    strcat(st, ts);
    printf("now st is %s\n", st);
    int C= strcmp(st, ts);
    printf("comparison gives %d\n", C);
	return 0;
}
