#include<stdio.h>
#define MAXSIZE 5

typedef int SElemType;

typedef struct{
	SElemType data[MAXSIZE];
	int top;
}SqStack;

void Push(SqStack *S, SElemType e); 
void Pop(SqStack *S, SElemType *e); 

int main(void){
	SqStack S;
	S.top = -1;
	Push(&S,1);
	Push(&S,2);
	Push(&S,3);
	SElemType e;
	Pop(&S, &e);
	printf("%d", e);
}

void Push(SqStack *S, SElemType e){
	if(S->top == MAXSIZE - 1) return;
	
	S->top++;
	S->data[S->top] = e;
}

void Pop(SqStack *S, SElemType *e){
	if(S->top == - 1) return;
	*e = S->data[S->top--];
}
