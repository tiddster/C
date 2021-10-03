#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode;

void CreateBiTree(BiTNode *T);
void PreOrderTraverse(BiTNode *T);
void InOrderTraverse(BiTNode *T);
void PostOrderTraverse(BiTNode *T);

int main(int argc, char const *argv[])
{
	BiTNode *T;
	CreateBiTree(T);
	PreOrderTraverse(T);
	InOrderTraverse(T);
	PostOrderTraverse(T);
	return 0;
}

void CreateBiTree(BiTNode *T){
	ElemType ch;
	scanf("%c",&ch);
	if(ch=='#')
		T=NULL;
	else{
		T=(BiTNode*)malloc(sizeof(BiTNode));
		if(!T)
			return;
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

void PreOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	printf("%c",T->data);
	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
}

void InOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	InOrderTraverse(T->lchild);
	printf("%c",T->data);
	InOrderTraverse(T->rchild);
}

void PostOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	PostOrderTraverse(T->lchild);
	PostOrderTraverse(T->rchild);
	printf("%c",T->data);
}
