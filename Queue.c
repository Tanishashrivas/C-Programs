#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
	int size;
	int f;
	int r;
	int *arr;
}sq;

int isfull(sq *q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int isempty(sq *q){
	if(q->f==q->r){
		return 1;
	}
	return 0;
}

void Enqueue(sq *q, int val){
	if(isfull(q)){
		printf("Element cant be pushed\n");
	}
	else{
		q->r=q->r + 1;
		q->arr[q->r]=val;
		printf("%d\n", val);
	}
}

int Dequeue(sq *q){
	int a=-1;
	if(isempty(q)){
		printf("Element cant be returned\n");
	}
	else{
		q->f++;
		a= q->arr[q->f];
	}
		return a;
}


int main(){
	sq q;
	q.size=10;
	q.f=q.r=-1;
	q.arr= (int*)malloc(q.size*(sizeof(int)));

	printf("Queue :\n");
	Enqueue(&q, 10);
	Enqueue(&q, 20);
	Enqueue(&q, 30);
	Enqueue(&q, 40);
	Enqueue(&q, 50);
	Enqueue(&q, 60);
	Enqueue(&q, 70);
	Enqueue(&q, 80);
	Enqueue(&q, 90);
	Enqueue(&q, 100);
	
	printf("Dequeuing element is %d\n",Dequeue(&q));
	printf("Dequeuing element is %d\n",Dequeue(&q));
	
	if(isempty(&q)){
	printf("the queue is empty\n");
	}
	
	if(isfull(&q)){
	printf("the queue is full\n");
	}
	
	return 0;
}
