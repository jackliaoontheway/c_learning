#include <stdio.h>
#include <stdlib.h>
int main(int argslen, char * args []) {
	
	char ch;
	FILE *wp = fopen("demo2.txt","w");
	FILE *rp = fopen("demo1.txt","r");
	
	if( wp == NULL) {
		printf("open file error.\n");
		exit(1);
	}
	if( rp == NULL) {
		printf("open file error.\n");
		exit(1);
	}
	
	while( (ch=fgetc(rp)) != EOF ) { // fgetc ���ļ���ȡ�����ַ�  EOF �����ļ������� 
		fputc(ch,wp); // fputc ���ַ�д���ļ� 
		putchar(ch); // putchar ����ַ�����ʾ�� 
	}
	
	fclose(wp);
	fclose(rp);
	
	
	
	return 0;
}
