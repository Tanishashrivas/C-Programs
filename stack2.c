#include<stdio.h>
#include<conio.h>

#define MAX 10
int arr[MAX],top=-1;
int count=0;
void push();
void pop();
void display();

int main()
{
	int ch;
	printf("\n1. push");
	printf("\n2. pop");
	printf("\n3. display");
	printf("\n4. end");
	
	while(1){
		printf("\n enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				exit(0);
				break;
			}
			default:{
				printf("invalid choice");
			}
		}
	}
}

void push(){
	int data;
	if(top==MAX-1){
		printf("overflow");
	}
	else{
		printf("enter the element to be pushed:");
		scanf("%d", &data);
		top++;
		arr[top]=data;
	}
	count++;
}

void pop(){
	if(top==-1){
		printf("underflow");
	}
	else{
		printf("popped element is %d\n", arr[top]);
		top--;
	}
	count--;
}

void display(){
	int i;
	for(i=0;i<count;i++){
		printf("%d\n", arr[i]);
	}
}
