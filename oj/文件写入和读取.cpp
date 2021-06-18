#include <stdio.h>
#include <string.h>
int main(void){
	FILE *fp;
	/*
	fp = fopen("C:\\Users\\tiddler\\Desktop\\12.txt","w+");
	for(int i=0; i<=9; i++)
	fprintf(fp,"%d",i);
	fclose(fp);
	*/
	
	int a[10],i=0;
	char buf[1000];
	fp = fopen("C:\\Users\\tiddler\\Desktop\\12.txt","r");
	while(!feof(fp))
    {
        putchar(fgetc(fp));
    }
	fclose(fp);
} 
