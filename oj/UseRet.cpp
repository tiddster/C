#include <stdio.h>
int main()
{
    int n,ret;
    int sum = 1;
    printf("����������n:\n");
    ret = scanf("%d",&n);             //�ж�scanf�������Ƿ���ִ��� 
    while(n<=0||ret!=1){
    	
    	while(getchar() != '\n');     //��ȡ���е��ַ� 
    	
    	printf("�����������ȷ������n.\n");
    	printf("����������n:\n");
    	ret = scanf("%d",&n);
	}
	for(int i = 1; i < n; i++){
		sum = (sum+1)*2;
	}
	printf("��ʦ�·���Ŀ����Ϊ%d\n",sum);
}
