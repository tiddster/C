/*
����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죿ע���������⡣
�����ʽҪ��"���������ڣ��꣬�£��գ�\n"
�����ʽҪ��"%d��%d����%d��ĵ�%d��\n"
���������ʾ�����£�
���������ڣ��꣬�£��գ�
1990,2,14�L
2��14����1990��ĵ�45�졣
*/

#include <stdio.h>

int main(void){
    typedef struct{
        int year;
        int month;
        int day;
    }YMD;
    
    int d,m,y,dayofyear=0;
    printf("���������ڣ��꣬�£��գ�\n");
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
    printf("%d��%d����%d��ĵ�%d��\n",ymd.month,ymd.day, ymd.year,dayofyear);
}
