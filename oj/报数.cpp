/*
n����Χ��һȦ��˳���š��ӵ�һ���˿�ʼ��1��m������������m�����˳�Ȧ�ӣ�������������µ��˵ĳ�ʼ��š�
�������룺����һ�����룩
6 3��������������֮���пո�
��������������������
1
*/
#include <stdio.h>

int main(void){
	int n,m,a[100];
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		a[i] = 1;
	}
	
	int rest = n;
	int flag = -1;
	
	//ʣ�µĲ�����1ʱѭ�� 
	while(rest!=1){
		for(int i=0; i<m; i++){
			flag++;
			
			//��flag���������Ϊ0ʱ���� 
			while(a[flag] == 0)
				flag++;
				
			//��flag��������ʱ�ص�0 
			if(flag >= n)
				flag = 0;
			
			//����flagΪ0ʱҲΪ0 ����Ҫ�ٴ����� 
			while(a[flag] == 0)
				flag++;
		}
		printf("%d--",flag+1);
		//����m��������Ϊ0 
		a[flag] = 0;
		rest--;
	}
	
	for(int i=0; i<n; i++){ 
		if(a[i] != 0){
			printf("%d\n",i+1);
		}
	}
} 
