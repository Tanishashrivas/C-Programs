#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack{
	int size;
	int top;
	char *arr;
}st;

int stacktop(struct stack* sp){
	return sp->arr[sp->top];
}

int isEmpty(st *ptr){
	if(ptr->top == -1){
	return 1;
	}
	else{
		return 0;
	}
}
int isfull(st* ptr){
	if(ptr->top== ptr->size-1){
		return 1;
	}
	return 0;
}

void push(st *ptr, char data){
	if(isfull(ptr)){
		printf("stack overflow");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=data;
	}
}


char pop(st *ptr){
	if(isEmpty(ptr)){
		printf("\n stack underflow\n");
		return -1;
	}
	else{
		char data=ptr->arr[ptr->top];
		ptr->top--;
		return data;
	}
}

//INFIX TO POSTFIX
int Precedence(char ch){
	if(ch=='*' || ch=='/')
	return 3;
	else if(ch=='+' || ch=='-')
	return 2;
	else
	return 0;
}

int isOperator(char ch){
	if(ch =='*' || ch=='/' || ch=='+' || ch=='-')
	return 1;
	else 
	return 0;
}

char infixtopostfix(char *infix){
	struct stack *sp= (st *)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr = (char*)malloc(sp->size*(sizeof(char)));
	char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
	int i=0;//for  infix traversal
	int j=0;// postfix addition
	
	while(infix[i]!='\0'){
		if(!isOperator(infix[i])){
			postfix[j]=infix[i];
			j++;
			i++;
		}
		else if(Precedence(infix[i])>Precedence(stacktop(sp))){
			push(sp, infix[i]);
			i++;
		}
		else{
			postfix[j]= pop(sp);
			j++;
		}
	}
	while(!isEmpty(sp)){
		postfix[j] = pop(sp);
		j++;
	}
	postfix[j]='\0';
	return postfix;
}

int main(){
	char * infix= "a-b";
	printf("postfix is: %s", infixtopostfix(infix));
	
	return 0;
}
