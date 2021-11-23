#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;
typedef struct QueueNode{
	ElemType data;
	struct QueueNode *next;
}QueueNode;
typedef struct LinkQueue{
	QueueNode *front;
	QueueNode *rear;
}LinkQueue;

void EnQ(LinkQueue *Q, ElemType e){
	QueueNode *q = (QueueNode*)malloc(sizeof(QueueNode));
	
	q->data = e;
	q->next = NULL;
	
	Q->rear->next = q;
	Q->rear = q;
}

ElemType QuitQ(LinkQueue *Q){
	QueueNode *f;
	f = Q->front;
	Q->front = f->next;
	return f->data;
}

int main(void){
	LinkQueue *q = (LinkQueue*)malloc(sizeof(LinkQueue));
	q->front = (QueueNode*)malloc(sizeof(QueueNode));
	q->rear = q->front;
	
	int count;
	scanf("%d", &count);
	for(int i=0; i<count; i++){
		ElemType e;
		scanf(" %c",&e);
		if(i==0) q->front->data = e;
		else EnQ(q,e);
	}
	while(q->front != q->rear->next){
		ElemType e;
		e = q->front->data;
		printf("%c", e);
		EnQ(q,e);
		e = QuitQ(q);
		e = QuitQ(q);
	}
} 
