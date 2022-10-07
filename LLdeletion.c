#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}sn;

void display(sn* ptr){
	while(ptr!=NULL){
		printf("%d  ", ptr->data);
		ptr=ptr->next;
	}
	
}

sn* deleteatfirst(sn* head){
	sn* ptr=head;   
	head=head->next;
	free(ptr);
	return head;
}

sn* deleteatindex(sn* head, int index){
	sn* p=head;
	sn* q= head->next;
	for(int i=0;i<index-1;i++){
      	p=p->next;
	    q=q->next;
}
p->next=q->next;
free(q);
return head;
}

sn* deleteatend(sn* head){
	sn* p=head;
	sn* q= head->next;
	while(q->next!=NULL){
      	p=p->next;
	    q=q->next;
}
p->next=NULL;
free(q);
return head;
}

sn* deletebyvalue(sn* head, int value){
	sn* p=head;
	sn* q= head->next;
	while(q->data!=value && q->next!=NULL){
      	p=p->next;
	    q=q->next;
}
 if(q->data == value){
p->next=q->next;
free(q);
}
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
   	printf("linked list before deletion\n");
	display(head);
	printf("\n linked list after deletion\n");
   // head = deleteatfirst(head);
   // head = deleteatindex(head, 2);
 //   head = deleteatend(head);
   head = deletebyvalue(head, 20);
	display(head);
	
	return 0;
}
