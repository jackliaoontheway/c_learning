#include <stdio.h>
#include <stdlib.h>
int main(int argslen, char * args []) {
	
	char ch,filename [20] = "demo1.txt";
	FILE *fp = fopen(filename,"w");
	
	if( fp == NULL) {
		printf("open file error.\n");
		exit(1);
	}
	
	while( (ch=getchar()) != '#' ) { // getchar 获取输入字符 
		fputc(ch,fp); // fputc 将字符写入文件 
		putchar(ch); // putchar 输出字符到显示器 
	}
	
	fclose(fp);
	
	
	
	
	return 0;
}
