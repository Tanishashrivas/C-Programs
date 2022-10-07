#include<stdio.h>
#include<stdlib.h>

struct node{
		int n;
		struct node *next;
	};
	
struct node *head, *tail= NULL;

void data(int n){
	
	struct node *new= (struct node*)malloc(sizeof(struct node));
	new->n=n;
	new->next= NULL;
}

void display(){
	struct node *one= head;


 printf("nodes are :\n");

 while(one!= NULL){
 	printf("%d", one->n);
 	one= one->next;
}
printf("\n");
}

int main(){

data(1);
data(2);	
data(3);
data(4);

display(head);

return 0;
}
