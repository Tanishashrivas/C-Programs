#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
	struct node* prev;
}sn;

void display(sn* ptr){
	while(ptr!=NULL){
		printf("%d  ", ptr->data);
		ptr=ptr->next;
	}
}

void display1(sn* pt){
	while(pt!=NULL){
		printf("%d  ", pt->data);
		pt=pt->prev;
	}
}

int main(){
	sn* head;
	sn* two;
	sn* three;
	sn* four;
	sn* five;
	
	head=(struct node*)malloc(sizeof(struct node));
	two=(struct node*)malloc(sizeof(struct node));
	three=(struct node*)malloc(sizeof(struct node));
	four=(struct node*)malloc(sizeof(struct node));
	five=(struct node*)malloc(sizeof(struct node));
	
	head->data=2;
	head->next=two;
	head->prev=NULL;
	
	two->data=4;
	two->next=three;
	two->prev=head;
	
	three->data=20;
	three->next=four;
	three->prev=two;
	
	four->data=42;
	four->next=five;
	four->prev=three;
	
	five->data=37;
	five->next=NULL;
	five->prev=four;
	
	display(head);
	printf("\nreverse linked list :\n");
	display1(five);
	
	return 0;
}
