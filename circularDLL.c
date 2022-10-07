#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
	struct node* prev;
}sn;

void display(sn* head){
sn* ptr= head;
	do{
		printf("%d \n", ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}

void display1(sn* five){
sn* ptr= five;
	do{
		printf("%d \n", ptr->data);
		ptr=ptr->prev;
	}while(ptr!=five);
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
	head->prev=five;
	
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
	five->next=head;
	five->prev=four;
	
	display(head);
	printf("\nreverse linked list :\n");
	display1(five);
	
	return 0;
}
