#include<stdio.h>

#define MAXSIZE 10

typedef int SElemType;

typedef struct{
	SElemType data[MAXSIZE];
	int top1;
	int top2;
}SqDouStack;

void Push(SqDouStack *S, SElemType e, int StackNumber);
SElemType Pop(SqDouStack *S,int StackNumber);

int main(void){
	SqDouStack S;
	S.top1 = -1;
	S.top2 = MAXSIZE;
	Push(&S, 1, 1);
	Push(&S, 2, 2);
	SElemType e1, e2;
	printf("%d\n", Pop(&S,1)); 
	printf("%d\n", Pop(&S,1)); 
}

void Push(SqDouStack *S, SElemType e,int StackNumber){
	if(S->top1+1 == S->top2) return;
	
	if(StackNumber == 1) S->data[++S->top1] = e;
	
	else if(StackNumber == 2) S->data[--S->top2] = e;
}

SElemType Pop(SqDouStack *S ,int StackNumber){
	if(StackNumber == 1)
	{
		if(S->top1 == -1) return NULL;
		return S->data[S->top1--];
	} 
	else if(StackNumber == 2)
	{
		if(S->top2 == MAXSIZE) return NULL;
		return S->data[S->top2++];
	}
}
