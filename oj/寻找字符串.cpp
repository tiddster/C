#include <stdio.h>
#include <string.h>
#define MAXN 20
#define MAXL 256
int match(char *s1,char *s2,int len){
    while (len--){
        if (*s1!=*s2) return 0;
        s1++;
        s2++;
    }
    return 1;
}
int main(){
	int n;
	int len[MAXN];
	char str[MAXN][MAXL];
    int i,j;
    int ans,ansi;
    
    char line[100];
    scanf("%d",&n);
    gets(line);
    for (i=0;i<n;i++){
        gets(str[i]);
        len[i]=strlen(str[i]);
    }
    
    ans=-1;
    for (j=len[0];ans==-1 && j>0;j--)
        for (i=0;ans==-1 && i+j-1<len[0];i++){
        	int flag1,k;
        	flag1=1;
        	for (k=1;flag1 && k<n;k++){
            	int flag2 = 0;
            	for (int s=0;!flag2 && s+j-1<len[k];s++)
            	if (match(str[0]+i,str[k]+s,j)) flag2=1;
            	if (!flag2) flag1=0;
            	}
        	if (flag1){
        		ans=j;
        		ansi=i;
        	}
        }
        
    if (ans==-1) puts("No");
    else
    {
    	for (i=0;i<ans;i++) putchar(str[0][i+ansi]);
    	putchar('\n');
    }
}
