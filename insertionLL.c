#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}sn;

void display(sn* ptr){
	while(ptr!=NULL){
		printf("%d\n ", ptr->data);
		ptr=ptr->next;
	}
	
}

//insertion at the beginning
sn* insertatfirst(sn* head, int data){
	sn* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
}

//insert at index
sn* insertinBW(sn* head,int data, int index){
    sn* ptr=(struct node*)malloc(sizeof(struct node));
    sn* a= head;
    int i=0;
    while(i!=index-1){
    	a=a->next;
    	i++;
	}
	ptr->next=a->next;
	a->next=ptr;
    ptr->data=data; 
    return head;
}

//insert at the end
sn* insertatend(sn* head, int data){
	sn* ptr= (struct node*)malloc(sizeof(struct node));
	sn* a= head;
    while(a->next!=NULL){
    	a=a->next;
	}
	a->next=ptr;
	ptr->next=NULL;
    ptr->data=data; 
	return head;
}

sn* insertafteranode(sn* head,int data, sn* prevnode){
	sn* ptr= (struct node*)malloc(sizeof(struct node));
    ptr->next=prevnode->next;
	prevnode->next=ptr;
	ptr->data=data;
	return head;
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
	five->next=NULL;
	
    head=insertatfirst(head, 64);
    display(head);
   /* head=insertinBW(head, 13, 2);
    display(head);
    head=insertatend(head, 39);
    display(head);
    insertafteranode(head, 11, three);
    display(head);*/
	
	return 0;
}
