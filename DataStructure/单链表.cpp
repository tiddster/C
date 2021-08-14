#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
typedef struct node
{
	ElemType elemType;
	struct node *next;
}Node;

Node* CreateList(int n);

int main(void)
{
	Node *head, *r;
	head = CreateList(8);
	r = head;
	while(r!=NULL){
		r = r->next;
		printf("%d", r->elemType);
	}
	return 0;
}

Node* CreateList(int n)
{
	Node *p,*r;
	p = (Node*)malloc(sizeof(Node));
	r = p;
	for(int i=0; i<n; i++){
		Node *temp = (Node*)malloc(sizeof(Node));
		temp->elemType = i;
		temp->next = NULL;
		r->next = temp;
		r = temp;
	}
	return p;
}
