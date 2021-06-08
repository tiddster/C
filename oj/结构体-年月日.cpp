/*
定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天？注意闰年问题。
输入格式要求："请输入日期（年，月，日）\n"
输出格式要求："%d月%d日是%d年的第%d天\n"
程序的运行示例如下：
请输入日期（年，月，日）
1990,2,14↙
2月14日是1990年的第45天。
*/

#include <stdio.h>

int main(void){
    typedef struct{
        int year;
        int month;
        int day;
    }YMD;
    
    int d,m,y,dayofyear=0;
    printf("请输入日期（年，月，日）\n");
    scanf("%d,%d,%d",&y,&m,&d);
    YMD ymd = {y,m,d};
    for(int i=1; i<ymd.month; i++){
        switch(i){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: dayofyear += 31;
                     break;
            case 4:
            case 6:
            case 9:
            case 11: dayofyear += 30;
                     break;
            case 2: dayofyear += 28;
                    break;
        }
    }
    dayofyear += ymd.day;
    if(ymd.month>2 && ymd.year%4==0 && ymd.year%100!=0){
        dayofyear += 1;
    }
    printf("%d月%d日是%d年的第%d天\n",ymd.month,ymd.day, ymd.year,dayofyear);
}
