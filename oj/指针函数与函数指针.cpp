#include <stdio.h>
#include <stdlib.h> 
int max(int a, int b);
int (*f)(int,int);
 
int* min(int a, int b);

int main(void){
	f = &max;  //取地址符可要可不要 
	int c = (*f)(1,2);
	printf("%d--",c);
	
	int *p=NULL;
	p = min(1,2);
	printf("%d--",p);
	printf("%d--",*p);	
}

int max(int a, int b){
	return a>b?a:b;
}

int* min(int a, int b){
	int *p = (int*)malloc(sizeof(int));
	*p = a>b?b:a;
	return p;
}

