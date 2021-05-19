/*
从键盘输入某年某月（包括闰年），编程输出该年的该月拥有的天数。
**输入格式要求："%d,%d" 提示信息："Input year,month:" "The number of days is %d\n"
**输出格式要求："%d"
程序运行示例1如下：
Input year,month:1984,2
The number of days is 29
程序运行示例2如下：
Input year,month:2000,2
The number of days is 29
程序运行示例3如下：
Input year,month:1985,2
The number of days is 28
程序运行示例4如下：
Input year,month:1983,13
Input year,month:1983,-1
Input year,month:1983,1
The number of days is 31
*/
#include <stdio.h>
int main(void){
	int year, month,days;
	do{
		printf("Input year,month:");
		scanf("%d,%d",&year,&month);
	} while (month<1 || month>12);
	
	if(month==2){
		if(((year%100 !=0 && year%4 == 0) || year%400 == 0)){
			days = 29;
		} else {
			days = 28;
		}
	} else {
		switch(month)
	    {
	        case 1:
	        case 3:
	        case 5:
	        case 7:
	        case 8:
	        case 10:
	        case 12: days=31;break;
	        case 4:
	        case 6:
	        case 9:
	        case 11: days=30;break;
	    }
	}
	printf("The number of days is %d\n",days);
} 
