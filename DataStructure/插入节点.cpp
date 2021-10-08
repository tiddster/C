#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node;

Node* CreateList(Node *head, int n);
void Insert(Node *head, int n);

int main(void){
	Node *head;
	int number = 0;
	scanf("%d",&number);
	head = CreateList(head, number);
	int insert = 0;
	scanf("%d",&insert);
	Insert(head, insert);
	Node *r;
	r = head->next;
	while(r!=NULL){
		if(r->next == NULL) printf("%d", r->data);
		else printf("%d-", r->data);
		r = r->next;
	}
}

Node* CreateList(Node *head, int n){
	Node *p, *r;
	head = (Node*)malloc(sizeof(Node));
	r = head;
	for(;n>0;n--){
		ElemType e;
		p = (Node*)malloc(sizeof(Node));
		scanf("%d",&e);
		p->data = e;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return head;
}

void Insert(Node *head, int n){
	Node *r, *p;
	r = head->next;
	while(r->next!=NULL){
		p = r->next;
		if(n>r->data&&n<p->data){
			Node *temp = (Node*)malloc(sizeof(Node));
			r->next = temp;
			temp->data = n;
			temp->next = p;
			return;
		}
		r = p;
	}
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = n;
	temp->next = NULL;
	p->next = temp;
}
