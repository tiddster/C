#include<stdio.h>
#include<stdlib.h>

typedef int SElemType;

typedef  struct StackNode{
	SElemType data;
	struct StackNode *next;
}StackNode;

typedef struct LinkStack{
	StackNode *top;
	int count;
}LinkStack;

int isCorrect(LinkStack *S, int a[], int b[], int n);
void Push(LinkStack *S, SElemType e);
StackNode *Pop(LinkStack *S);

int main(void){
	LinkStack S;
	S.top = NULL;
	S.count = 0;
	int n;
	scanf("%d",&n);
	while(n!=0){
		int a[n],b[n];
		for(int i=0; i<n; i++){
			a[i] = i+1;
			scanf("%d", &b[i]);
		}
		if(isCorrect(&S,a,b,n)) printf("Yes\n");
		else printf("No\n");
	}
}

int isCorrect(LinkStack *S, int a[], int b[], int n){
	int i=0, j=0;
	while(1){
		if(S->top == NULL){
			Push(S,a[j]);
			j++;
		}
		if(S->top->data != b[i]){
			Push(S,a[j]);
			j++;
		} else {
			Pop(S);
			i++;
		}
		
		if(i==n) return 1;
		else if(i<n&&j==n) return 0;
	}
	return 0;
}

void Push(LinkStack *S, SElemType e){
	StackNode *s=(StackNode*)malloc(sizeof(StackNode));
	s->data = e;
	s->next = S->top;
	S->top = s;
	S->count++;
}

StackNode *Pop(LinkStack *S){
	if(S->top == NULL) return NULL;
	
	StackNode *s = S->top;
	S->top = s->next;
	return s;
}
