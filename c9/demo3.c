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
	gets(string1); // gets(string1) ֻ��һ������ 
	fputs(string1,wp);
	
	
	int line = 0;
	while( (fgets(string1,SIZE,fp)) != NULL ) { // fgets ��ȡ�ļ��ַ��� ���û���򷵻�NULL   fgets ��3������  
		//printf("%d %s",line++ , string1); 
		puts(string1); // puts ����ַ�������ʾ�� 
	}
	
	fclose(fp);
	fclose(wp);
	
	return 0;
}
