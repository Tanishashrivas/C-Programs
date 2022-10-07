#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee m){
	
	printf("code of employee is %d\n", m.code);
	printf("salary of employee is %f\n", m.salary);
	printf("name of employee is %s\n", m.name);	
}

int main(){
	struct employee e, *ptr;
	ptr= &e;
	
	ptr->code = 112;
	ptr->salary = 11.1;
	strcpy(ptr->name, "muskan");
	
	show(e);
	
	printf("code of employee is %d\n", e.code);
	return 0;
}
