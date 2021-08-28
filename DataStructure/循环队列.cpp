#include<stdio.h>
#define MAXSIZE 5

typedef int QElemType;

typedef struct{
	QElemType data[MAXSIZE];
	int front;
	int rear;
}SqQueue;

void initQueue(SqQueue *Q);
int QueueLength(SqQueue Q);
void EnQueue(SqQueue *Q, QElemType e);
QElemType QuitQueue(SqQueue *Q);

int main(void){
	SqQueue queue;
	initQueue(&queue);
	EnQueue(&queue, 1);
	EnQueue(&queue, 2);
	EnQueue(&queue, 3);
	EnQueue(&queue, 4);
	EnQueue(&queue, 5);
	printf("%d", QuitQueue(&queue));
} 

void initQueue(SqQueue *Q){
	Q->front = 0;
	Q->rear = 0;
}

int QueueLength(SqQueue Q){
	return  (Q.rear -  Q.front + MAXSIZE) % MAXSIZE + 1;	
}

void EnQueue(SqQueue *Q, QElemType e){
	if(QueueLength(*Q) == MAXSIZE){
		printf("队列已满\n");
		return;
	}
	
	Q->data[Q->rear] = e;
	if(Q->rear == MAXSIZE - 1) Q->rear = 0;
	else Q->rear++;
}

QElemType QuitQueue(SqQueue *Q){
	if(Q->front == Q->rear){
		printf("队列为空\n"); 
		return NULL;	
	}
	
	int pos = Q->front;
	if(Q->front == MAXSIZE - 1) Q->front = 0;
	else Q->front++;
	
	return Q->data[pos];
}
