/*
题目内容：一个二维数组，每行保存着一段字符串，该字符串可能是中文的，有可能是英文的，试利用strcmp()函数对该二维数组的每行字符串进行排序。排序规则为：
1.所有的英文都排在中文前面。
2.英文之间以及中文之间进行比较时，逐个字符比较，并按照字母表升序排序，如：
    英文之间："ac"排在"b"前面（因为两个字符串的第一个字符的ACSII值'a'<'b'，故ac排在前面）；
    中文之间：同上。
要求先输入一个n来确定字符串的个数，字符串个数最多为10个，此外，每行字符串最大长度不超过20。

输入格式：printf("请输入字符串个数：");
                    scanf("%d",&n);
                    printf("请输入所有的字符串：\n");
  输出格式：printf("排序后的字符串顺序如下：\n");
*/
#include <stdio.h>
#include <string.h> 

int main(void){
    int n = 0;
    printf("请输入字符串个数：");
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

