#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *fp = fopen("a.txt","r");
	if(fp == NULL) {
		printf("ofen file error");
		exit(1);
	}
	FILE *fpnew = fopen("new.txt","w");
	char c;
	while( (c = fgetc(fp)) != EOF ) 
	{
		if(c == 'a') {
			fputc('+',fpnew);
		} else if(c == 'b') {
			fputc('-',fpnew);
		} else if(c == 'c') {
			fputc('*',fpnew);
		} else if(c == 'd') {
			fputc('\\',fpnew);
		} else {
			fputc(c,fpnew);
		}

	}
	fclose(fp);
	fclose(fpnew);
	return 0;
}
