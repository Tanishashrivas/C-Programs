#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int size;
	int top;
	int *arr;
}st;

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

int main(){
	
struct stack *s;
	s->size= 50;
	s->top=-1;
	s->arr=(int*)malloc(s->size * sizeof(int));
	
	s->arr[0]=2;
	s->top++;
	
	if(isEmpty(s)){
			printf("stack underflow!");
	}
	else{
		printf("the stack is not empty");
	}
return 0;
}
