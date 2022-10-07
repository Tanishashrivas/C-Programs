#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int count =0;

//creating stack
typedef struct stack{
	int size[MAX];
	int top;
}st;

int stacktop(struct stack* sp){
	return sp->size[sp->top];
}

int isfull(st *s){
	if(s->top==MAX-1)
  {
    return 1;	
  }
  else{
  	return 0;
  }
}  

int isempty(st *s){
	if(s->top==-1)
  {
    return 1;	
  }
  else{
  	return 0;
  }
} 

void push(st *s, int data){
	if(isfull(s)){
		printf("stack overflow");
	}
	else{
		s->top++;
		s->size[s->top]=data;
	}
	count++;
}


void pop(st *s){
	if(isempty(s)){
		printf("\n stack underflow\n");
	}
	else{
		printf("item popped = %d", s->size[s->top]);
		s->top--;
	}
	count--;
printf("\n");
}

void display(st *s){
	printf("stack :\n");
	for(int i=0; i<count;i++){
		printf("%d", s->size[i]);
	}
	printf("\n");
}

int main(){
	int ch;
	st *s= (st*)malloc(sizeof(st));
	
	push(s, 2);
	push(s, 1);
	push(s, 4);
	push(s, 3);
	
	display(s);
	
	pop(s);
	
	printf("\n after popping out\n");
	display(s);
	
	return 0;
}

/*
struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack *ptr){
	if(ptr->top == -1){
	return 1;
	}
	else{
		return 0;
	}
}

int main(){
	
struct stack *s;
	s->size= 50;
	s->top=-1;
	s->arr=(int*)malloc(s->size * sizeof(int));
	
//	s->arr[0]=2;
//	s->top++;
	
	if(isEmpty(s)){
			printf("stack underflow!");
	}
	else{
		printf("the stack is not empty");
	}
return 0;
}*/
