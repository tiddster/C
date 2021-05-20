#include <stdio.h>
int main()
{
    int n,ret;
    int sum = 1;
    printf("请输入天数n:\n");
    ret = scanf("%d",&n);             //判断scanf的输入是否出现错误 
    while(n<=0||ret!=1){
    	
    	while(getchar() != '\n');     //读取所有的字符 
    	
    	printf("请继续输入正确的天数n.\n");
    	printf("请输入天数n:\n");
    	ret = scanf("%d",&n);
	}
	for(int i = 1; i < n; i++){
		sum = (sum+1)*2;
	}
	printf("老师下发题目数量为%d\n",sum);
}
