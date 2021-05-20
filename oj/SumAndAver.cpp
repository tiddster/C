/*
某班期末考试科目为数学（MT）、英语（EN）和物理（PH），有最多不超过40人参加考试。请编程计算：（1）每个学生的总分和平均分；（2）每门课程的总分和平均分。
**输入格式要求："%d" "%ld"(学号) 提示信息："Input the total number of the students(n<40):" "Input student’s ID and score as: MT  EN  PH:\n"
**输出格式要求："Counting Result:\n" "Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n" "%12ld\t"(打印学号) "%4d\t"（打印每门课成绩）"%4d\t%5.1f\n"（打印总分和平均分） "SumofCourse \t" "%4d\t"(打印每门课的总分) "\nAverofCourse\t" "%4.1f\t"(每门课的平均分) 
程序的运行示例如下：
Input the total number of the students(n<=40):4
Input student’s ID and score as: MT  EN  PH:
070310122  97  87  92
070310123  92  91  90
070310124  90  81  82
070310125  73  65  80
Counting Result:
Student’s ID    MT	EN	PH	SUM	AVER
070310122	97	87	92	276	92.0
070310123	92	91	90	273	91.0
070310124	90	81	82	253	84.3
070310125	73	65	80	218	72.7
SumofCourse	352	324	344		
AverofCourse	88.0	81.0	86.0
*/
#include <stdio.h>

int main(void){
	int MT[40], EN[40], PH[40], SUM[40],total;
	float AVER[40];
	long long ID[40];
	int SumOfCourse[3] = {0,0,0};
	float AverOfCourse[3] = {0,0,0};
	printf("Input the total number of the students(n<40):");
	scanf("%d",&total);
	printf("Input student’s ID and score as: MT  EN  PH:\n");
	for(int i=0; i<total; i++){
		scanf("%ld %d %d %d",&ID[i],&MT[i],&EN[i],&PH[i]);
		SUM[i] = MT[i]+EN[i]+PH[i];
		AVER[i] = (float)SUM[i]/total;
	}
	for(int j=0; j<total; j++){
		SumOfCourse[0] += MT[j];
		AverOfCourse[0] = (float)SumOfCourse[0]/total;
		SumOfCourse[1] += EN[j];
		AverOfCourse[1] = (float)SumOfCourse[1]/total;
		SumOfCourse[2] += PH[j]; 
		AverOfCourse[2] = (float)SumOfCourse[2]/total;
	}
	
	printf("Counting Result:\n");
	printf("Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
	for(int i=0; i<total; i++){
	    printf("%12lld\t%4d\t%4d\t%4d\t%4d\t%5.1f\n",ID[i],MT[i],EN[i],PH[i],SUM[i],AVER[i]);
	}
	
	printf("SumofCourse \t");
	for(int i=0; i<3; i++){
		printf("%4d\t",SumOfCourse[i]);
	}
	printf("\nAverofCourse\t");
	for(int i=0; i<3; i++){
		printf("%4.1f\t",AverOfCourse[i]);
	}
} 
