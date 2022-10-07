#include<stdio.h>

void add(int a,int b){
	printf("addition of 2 numbers is %d\n",a+b);
}
int subt(int a,int b){
	printf("subtraction of 2 numbers is %d\n",a-b);
}
void multi(int a,int b){
	printf("multiplication of 2 numbers is %d\n",a*b);
}
int div(int a,int b){
	printf("division of 2 numbers is %d\n",a/b);
}

int main(){
	int n,a,b;
	printf("enter a and b:\n");
	scanf("%d\n""%d", &a, &b);
	//calculator using function
	printf(" 1.Addition\n 2. Subtraction\n 3.Multiplication\n 4.Division\n Enter your choice between 1 and 4:\n");
	
	do{
			scanf("%d",&n);
		switch(n){
			case 1:{
				add(a,b);
				break;
			}
			case 2:{
			    subt(a,b);
				break;
			}
			case 3:{
			 multi(a,b);
				break;
			}
		    case 4:{
		    	div(a,b);
				break;
			}
			default:{
				printf("Enter a valid choice\n");
			}
		}
	}while(n>0 && n<5);
	return 0;
}
