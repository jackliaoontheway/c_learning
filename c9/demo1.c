#include <stdio.h>
#include <stdlib.h>
int main(int argslen, char * args []) {
	
	char ch,filename [20] = "demo1.txt";
	FILE *fp = fopen(filename,"w");
	
	if( fp == NULL) {
		printf("open file error.\n");
		exit(1);
	}
	
	while( (ch=getchar()) != '#' ) { // getchar ��ȡ�����ַ� 
		fputc(ch,fp); // fputc ���ַ�д���ļ� 
		putchar(ch); // putchar ����ַ�����ʾ�� 
	}
	
	fclose(fp);
	
	
	
	
	return 0;
}
