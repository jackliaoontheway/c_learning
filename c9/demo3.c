#include <stdio.h>
#include <stdlib.h>
#define SIZE 256
int main(int argslen, char * args []) {
	
	char ch[SIZE],filename [20] = "demo3.txt";
	
	FILE *wp = fopen(filename,"w");
	FILE *fp = fopen("demo3-1.txt","r");
	
	if( fp == NULL) {
		printf("open file error1.\n");
		exit(1);
	}
	if( wp == NULL) {
		printf("open file error2.\n");
		exit(1);
	}
	
	char string1 [SIZE] ;
	gets(string1); // gets(string1) 只有一个参数 
	fputs(string1,wp);
	
	
	int line = 0;
	while( (fgets(string1,SIZE,fp)) != NULL ) { // fgets 获取文件字符串 如果没有则返回NULL   fgets 有3个参数  
		//printf("%d %s",line++ , string1); 
		puts(string1); // puts 输出字符串到显示器 
	}
	
	fclose(fp);
	fclose(wp);
	
	return 0;
}
