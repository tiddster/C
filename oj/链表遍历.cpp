/*
建立一个链表，使链表中从头到尾的结点数据域依次是一个数组的各个元素的值。程序先建立链表然后再遍历输出（假定链表和数组均有6个整型元素）。
程序运行示例如下：
输入数组6个元素的值。
1 3 5 7 9 11
此链表各个结点的数据域为：1 3 5 7 9 11 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct intiger{
	int x;
	struct intiger *next;
} INT;

void create(INT *Int);
void find(INT *Int);

int main(void){
	INT pInt[6];
	create(pInt);
	find(pInt);
} 

void create(INT *Int){
	INT *p = (INT*)malloc(sizeof(INT));
	printf("输入数组6个元素的值。\n");
	for(int i=0; i<6; i++, Int++){
	    scanf("%d",&Int->x);
		p->next = Int;
		p = Int;
	}
}

void find(INT *Int){
    printf("此链表各个结点的数据域为：");
	while(Int!=NULL){
		printf("%d ",Int->x);
		Int = Int->next;
	}
}
