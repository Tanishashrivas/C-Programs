#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[15];
};
int main(){
	struct employee m = {40 ,50.6,"muskan"};
	
	printf("code is %d\n", m.code);
	printf("Salary is: %.1f \n", m.salary);
    printf("Name is: %s \n", m.name);
  
  return 0;
}
