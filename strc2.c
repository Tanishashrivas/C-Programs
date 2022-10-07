#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[15];
};

int main(){
	struct employee a,b,c;
	
	printf("enter the value for code of a :\n");
	scanf("%d", &a.code);
    printf("enter the value for salary of a :\n");
    scanf("%f", &a.salary);
    printf("enter the value for name of a :\n");
   	scanf("%s", a.name); 
    
   	printf("enter the value for code of b :\n");
   	scanf("%d", &b.code);
    printf("enter the value for salary of b :\n");
    scanf("%f", &b.salary);
    printf("enter the value for name of b :\n");
    scanf("%s", b.name);
    
    printf("enter the value for code of c :\n");
    scanf("%d", &c.code);
    printf("enter the value for salary of c :\n");
    scanf("%f", &c.salary);
    printf("enter the value for name of c :\n");
    scanf("%s", c.name);
    
    printf("a : %d, %f, %s\n", a.code,a.salary,a.name);
    printf("b : %d, %f, %s\n", b.code,b.salary,b.name);
    printf("c : %d, %f, %s\n", c.code,c.salary,c.name);
    
    return 0;
}

