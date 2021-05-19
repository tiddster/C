#include <stdio.h>
/*
从键盘输入学生的成绩（参加人数最多不超过40人），当输入为负数时，表示输入结束，试编程将分数按从高到低顺序进行排序输出。

通过调用sort函数进行分数排序。

**输入格式要求："%d"
 提示信息："Total students are %d\n" "Sorted scores:" "Input score:" 
**输出格式要求："%4d"
*/

void sort(int score[], int n);

int main(void){
	int score[40], i, a;
	do{
		printf("Input score:" );
		scanf("%d",&a);
		if(a >= 0){
			score[i] = a;
		} else {
			break;
		}
		i++;
	} while (i<=39);
	
	sort(score,i);
	printf("Total students are %d\n",i);
	printf("Sorted scores:");
	for(int j=0; j<i; j++)
		printf("%d ", score[j]);
}

void sort(int score[], int n){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(score[i] < score[j]){
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}
}
