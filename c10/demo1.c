#include <stdio.h>
#include <stdlib.h>
int main(int argslen, char * args []) {
	
	char s [10];
	FILE *fp = fopen("text.dat","w");
	
	if( fp == NULL) {
		printf("open file error.\n");
		exit(1);
	}
	 
	
	fputs("welcome",fp);
	fclose(fp);
	
	fp=fopen("text.dat","a+");
	
	fprintf(fp,"%d",55);
	
	rewind(fp);
	
	fscanf(fp,"%s",s);
	puts(s);
	fclose(fp);
	
	fclose(fp);
	
	
	
	
	return 0;
}
