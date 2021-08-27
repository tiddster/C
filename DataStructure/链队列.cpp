#include<stdio.h>
#include<stdlib.h>

typedef int QElemType;

typedef struct QNode{
	QElemType q;
	struct QNode *next;
}QNode;

typedef struct{
	QNode *front;
	QNode *rear;
}LinkQueue;

void EnQueue(LinkQueue *Q, QElemType q);
void initQueue(LinkQueue *Q);
QNode *QuitQueue(LinkQueue *Q); 

int main(void){
	LinkQueue *linkQ = (LinkQueue*)malloc(sizeof(LinkQueue));
	initQueue(linkQ);
	EnQueue(linkQ,1);
	EnQueue(linkQ,2);
	EnQueue(linkQ,3);
	EnQueue(linkQ,4);
	printf("%d\n", QuitQueue(linkQ)->q);
	printf("%d\n", QuitQueue(linkQ)->q);
}

void initQueue(LinkQueue *Q){
	Q->front = (QNode*)malloc(sizeof(QNode));
	Q->rear = Q->front;
}

void EnQueue(LinkQueue *Q, QElemType e){
	QNode *q = (QNode*)malloc(sizeof(QNode));
	
	q->q = e;
	q->next = NULL;
	Q->rear->next = q;
	Q->rear = q;
}

QNode *QuitQueue(LinkQueue *Q){
	if(Q->front == Q->rear) return NULL;
	QNode *q, *n;
	n = Q->front;
	q = Q->rear;
	while(n->next != q && n->next != NULL){
		n = n->next;
	}
	Q->rear = n;
	return q;
}
