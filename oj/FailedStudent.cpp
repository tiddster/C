/*
输入某班学生某门课的成绩（最多不超过40人，具体人数由用户键盘输入），用函数编程统计不及格人数。
**输入格式要求："%d"  提示信息："How many students?"
**输出格式要求："Fail students = %d\n"
程序运行示例如下：
How many students?5
45 56 78 99 100
Fail students = 2
*/
#include <stdio.h>

int main(void){
	int score[40],n,m;
	printf("How many students?");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&score[i]);
	}
	m=0;
	for(int i=0; i<n; i++){
		if(score[i] < 60){
			m++;
		}
	}
	printf("Fail students = %d",m);
} 
