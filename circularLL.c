#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}sn;

/*void display(sn* ptr){
	while(ptr!=NULL){
		printf("%d  ", ptr->data);
		ptr=ptr->next;
	}
	
}*/

void display(sn* head){
	sn* ptr= head;
	do{
		printf("%d \n", ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
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
	
	two->data=4;
	two->next=three;
	
	three->data=20;
	three->next=four;
	
	four->data=42;
	four->next=five;
	
	five->data=37;
	five->next=head;
	
	display(head);
	
	return 0;
}
