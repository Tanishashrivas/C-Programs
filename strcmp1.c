#include<stdio.h>
#include<string.h>

int main(){
	char st[35];
	char ts[35];
//char st[]={'M','U','S','K','A','N','\0'};
//char *ptr=st;

printf("enter the value of first string:");
scanf("%s", st);
printf("enter the value of second string :\n");

char c;
int i=0;
 while(c!='\n'){
    fflush(stdin);
    scanf("%c", &c);
    ts[i]=c;
    i++;
	}
	ts[i-1]='\0';

printf("%s", st);
printf("%s", ts);

int d=strcmp(st,ts);
printf("on comparison we get: %d\n", d);
  if(d==0){printf("strings are equal\n");
}
else{
	printf("strings aren't equal\n");
}
return 0;
}
