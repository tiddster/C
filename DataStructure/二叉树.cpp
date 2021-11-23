#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode;

BiTNode* CreateBiTree();
void PreOrderTraverse(BiTNode *T);
void InOrderTraverse(BiTNode *T);
void PostOrderTraverse(BiTNode *T);

int main(int argc, char const *argv[])
{
	BiTNode *T;
	T = CreateBiTree(); 
	PreOrderTraverse(T);
	printf("\n");
	InOrderTraverse(T);
	printf("\n");
	PostOrderTraverse(T);
	return 0;
}

BiTNode* CreateBiTree(){
   int a;
   BiTNode* T;
   scanf("%d",&a);
   if(a==0)
       T=NULL;
   else
   {
       T = (BiTNode*)malloc(sizeof(BiTNode));
       T->data = a;
       T->lchild = CreateBiTree();
       T->rchild = CreateBiTree();
   }
   return T;//返回根节点
}

void PreOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	printf("%d",T->data);
	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);
}

void InOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	InOrderTraverse(T->lchild);
	printf("%d",T->data);
	InOrderTraverse(T->rchild);
}

void PostOrderTraverse(BiTNode *T){
	if(T==NULL) return;
	PostOrderTraverse(T->lchild);
	PostOrderTraverse(T->rchild);
	printf("%d",T->data);
}
