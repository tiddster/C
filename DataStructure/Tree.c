#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;

typedef struct TNode
{
    ElemType data;
    struct TNode *lchild, *rchild;
}TNode;

void CreateTree(TNode *T);

int main(void){

}

void CreateTree(TNode *T){
    ElemType ch;
    scanf("%c",&ch);
    if(ch=='#') T=NULL;
    else{
        T = (TNode*)malloc(sizeof(TNode));
        if(!T) return;
        T->data = ch;
        CreateTree(T->lchild);
        CreateTree(T->rchild);
    }
}