#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}LNode;

int FindInLinkList(LNode* head, ElemType e);
LNode* CreateList(int n);

int main(void){
	LNode *head, *r;
	head = CreateList(8);
	printf("%d", FindInLinkList(head,5));
}

LNode* CreateList(int n){
	LNode *head, *p, *r;
	head = (LNode*)malloc(sizeof(LNode));
	r = head;
	for(int i=0; i<n; i++){
		int j;
		scanf("%d", &j);
		p = (LNode*)malloc(sizeof(LNode));
		p->data = j;
		p->next = NULL;
		
		r->next = p;
		r = p;
	}
	return head;
}

int FindInLinkList(LNode* head, ElemType e){
    int i = 1;
    LNode *q = head->next;
    while(q!=NULL){
        if(q->data == e) return i;
        i++;
        q = q->next;
    }
    return -1;
}
