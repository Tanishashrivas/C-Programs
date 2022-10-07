#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[15];
};

int main()
{
	struct employee e;
	e.code= 30;
	e.salary= 31.5;
	strcpy(e.name, "muskan");
	 
	 printf("%d\n", e.code);
    printf("%f\n", e.salary);
    printf("%s\n", e.name);

    return 0;
}
