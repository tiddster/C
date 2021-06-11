/*
题目内容：从键盘上输入10个学生的成绩，编写程序对学生的成绩从高到低输出，要求用链表实现。
  输入格式：
Input the 1th student’s score:
  输出格式：
After sorted:
  输出样例：
输入：
Input the 1th student’s score:89
Input the 2th student’s score:34
Input the 3th student’s score:65
Input the 4th student’s score:76
Input the 5th student’s score:87
Input the 6th student’s score:45
Input the 7th student’s score:78
Input the 8th student’s score:98
Input the 9th student’s score:67
Input the 10th student’s score:45
输出：
After sorted:
98 89 87 78 76 67 65 45 45 34
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct scoree{
	int num;
	struct scoree *next;
}SCORE;

void createList(SCORE *score);
void sort(SCORE *score);
void outputList(SCORE *score);

int main(void){
	SCORE score[10];
	createList(score);
	sort(score);
	outputList(score);
}

void createList(SCORE *score){
	SCORE *p = (SCORE*)malloc(sizeof(SCORE));
	for(int i=0;i<10; score++,i++){
		printf("Input the %dth student’s score:",i+1);
		scanf("%d",&score->num);
		p->next = score;
		p = score;
	}
}

void outputList(SCORE *score){
	printf("After sorted");
	while(score != NULL){
		printf("%d ",score->num);
		score = score->next;
	}
}

void sort(SCORE *score){
	int temp;
	for(int i=0; i<10; i++){
		for(int j=i; j<10; j++){
			if((score+j)->num > (score+i)->num){
				temp = (score+j)->num;
				(score+j)->num = (score+i)->num;
				(score+i)->num = temp;
			}
		}
	}
}
