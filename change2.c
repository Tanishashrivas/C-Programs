#include<stdio.h>
int change(int*a);
//{
//	int b;
//	*a=&b;
//	b=75;
//}

int main(){
    int b = 344;
    printf("The value of b before change is %d\n", b);
    change(&b);
    printf("The value of b after change is %d\n", b);
    return 0;
}

int change(int*a)
{
	int b;
	*a=&b;
	b=75;
}
