/*
输入某班学生某门课的成绩（最多不超过40人），
当输入为负值时，表示输入结束，
用函数编程统计成绩不低于平均分的学生人数。
要求：
(1)按如下函数原型进行编程：
int GetAboveAver(int score[], int n);
(2)在主函数中：
 输入学生成绩，
 然后调用函数GetAboveAver计算成绩不低于平均分的学生人数，
 最后输出该人数。
要求:
(1)学生成绩和平均分均定义为int类型
(2)**无输入提示信息
**输入格式为："%d"
**输出格式为："Students of above average is %d\n"
*/
#include <stdio.h>
int GetAboveAver(int score[], int n);

int main(void){
    int score[40];
    int i = 0;
    int a;
    do{
    	scanf("%d",&a);
    	if(a >= 0){
    		score[i] = a;
		} else {
			break;
		}
    	i++;
	} while (i<39);
	printf("Students of above average is %d\n",GetAboveAver(score,i));
}

int GetAboveAver(int score[], int n){
	int average, num;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += score[i];
	}
	printf("%d",sum);
	average = sum/n;
	num = 0;
	for(int i=0; i<n; i++){
		if(score[i] >= average)
			num++;
	}
	return num++;
} 
