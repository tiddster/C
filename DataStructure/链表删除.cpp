#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}LNode;

LNode* CreateList(int n);
LNode* DeleteNode(LNode* head, int target);

int main(void){
	LNode *head, *r;
	head = CreateList(6);
	r = head->next;
	int i;
	scanf("%d", &i);
	while(r!=NULL){
		if(r->next == NULL){
			printf("%d",(*r).data);
		} else {
			printf("%d ",(*r).data);
		}
		r = r->next;
	}
	printf("\n");
	
	head = DeleteNode(head, i);
	r = head->next;
	while(r!=NULL){
		if(r->next == NULL){
			printf("%d",(*r).data);
		} else {
			printf("%d ",(*r).data);
		}
		r = r->next;
	}
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

LNode* DeleteNode(LNode* head, int target){
	LNode *p = head->next;
	LNode *r = head;
	while(p!=NULL){
		if(p->data < target){
			r->next = p->next;
			p = p->next;
		} else {
			r = r->next;
			p = p->next;
		}
	}
	return head;
}
