/*
题目内容：
下面程序的功能是用动态数组编程输入任意m个班学生（每班n个学生）的某门课的成绩，计算最高分，并指出具有该最高分成绩的学生是第几个班的第几个学生。其中，m和n的值由用户从键盘任意输入（不限定m和n的上限值）。
  输入格式：
        printf("Input array size m,n:\n");
        scanf("%d,%d", &m, &n);
        printf("Input %d*%d array:\n", m, n);
        scanf("%d",&p[i*n+j]);
  输出格式：
        printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
  输出样例：
        Input array size m,n:
        3,4↙
        Input 3*4 array:
        80 82 63 74↙
        60 81 75 68↙
        87 91 78 92↙
        maxScore = 92, class = 3, number = 4
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,m,*p;
	printf("Input array size m,n:\n");
	scanf("%d,%d", &m, &n);
	p = (int*) malloc(n*m*sizeof(int));
	printf("Input %d*%d array:\n", m, n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &p[i*n+j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d  ",p[i*n+j]);
		}
		printf("\n");
	}
	int row,col,maxScore;
	maxScore = p[0];
	row = 0;
	col = 0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(maxScore < p[i*n+j]){
				maxScore = p[i*n+j];
				row = i;
				col = j;
			}
		}
	}
	printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
} 
