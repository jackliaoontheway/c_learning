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
	
	while( (ch=fgetc(rp)) != EOF ) { // fgetc 从文件获取输入字符  EOF 代表文件结束符 
		fputc(ch,wp); // fputc 将字符写入文件 
		putchar(ch); // putchar 输出字符到显示器 
	}
	
	fclose(wp);
	fclose(rp);
	
	
	
	return 0;
}
