#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}LNode;

void CheckBetter(LNode* head, ElemType e);
LNode* CreateList(int n);

int main(void){
	LNode *head, *r;
	head = CreateList(5);
	int i;
	scanf("%d", &i);
	CheckBetter(head, i);
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

void CheckBetter(LNode* head, ElemType e){
	int j=0;
	LNode *r = head->next;
	while(r!=NULL){
		if(r->data > e){
			if(r->next!=NULL)
				printf("%d ", r->data);
			else 
				printf("%d", r->data);
			j++;
		}
		r = r->next;
	}
	printf("\n%d",j);
}
