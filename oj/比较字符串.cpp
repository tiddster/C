/*
��Ŀ���ݣ�һ����ά���飬ÿ�б�����һ���ַ��������ַ������������ĵģ��п�����Ӣ�ĵģ�������strcmp()�����Ըö�ά�����ÿ���ַ������������������Ϊ��
1.���е�Ӣ�Ķ���������ǰ�档
2.Ӣ��֮���Լ�����֮����бȽ�ʱ������ַ��Ƚϣ���������ĸ�����������磺
    Ӣ��֮�䣺"ac"����"b"ǰ�棨��Ϊ�����ַ����ĵ�һ���ַ���ACSIIֵ'a'<'b'����ac����ǰ�棩��
    ����֮�䣺ͬ�ϡ�
Ҫ��������һ��n��ȷ���ַ����ĸ������ַ����������Ϊ10�������⣬ÿ���ַ�����󳤶Ȳ�����20��

�����ʽ��printf("�������ַ���������");
                    scanf("%d",&n);
                    printf("���������е��ַ�����\n");
  �����ʽ��printf("�������ַ���˳�����£�\n");
*/
#include <stdio.h>
#include <string.h> 

int main(void){
    int n = 0;
    printf("�������ַ���������");
    scanf("%d",&n);
    char string[n][10];
    char s[10];
    for(int i=0; i<n; i++){
    	scanf("%s",string[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(string[i],string[j])>0){
				strcpy(s,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],s);
			}
		}
	}
	for(int i=0; i<n; i++){
    	printf("%s  ",string[i]);
	}
    
}

