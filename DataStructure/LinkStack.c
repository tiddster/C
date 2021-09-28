#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LinkStackNode
{
    ElemType e;
    struct LinkStackNode* next;
}Node;

typedef struct LinkStack
{
    Node* top;
    Node* base;
    int count;
}LinkStack;

void Push(LinkStack *Stack, ElemType e);
ElemType Pop(LinkStack *Stack);

int main(void){
    LinkStack *p = (LinkStack*)malloc(sizeof(LinkStack));
    p->top = NULL;
    p->base = p->top;
    p->count = 0;
    Push(p,1);
    Push(p,2);
    printf("%d\n",Pop(p));
    printf("%d\n",Pop(p));
    system("pause");
}

void Push(LinkStack *Stack, ElemType e){
    Node *n = (Node*)malloc(sizeof(Node));
    n->e = e;
    n->next = Stack->top;
    Stack->top = n;
    Stack->count++;
}

ElemType Pop(LinkStack *Stack){
    if(Stack->count == 0) return 0;
    Node *s =  Stack->top;
    Stack->top = Stack->top->next;
    Stack->count--;
    return s->e;
}