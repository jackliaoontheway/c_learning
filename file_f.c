#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char ch;
	char rfile[20],wfile[20];
	FILE *fpr,*fpw;
	printf("input source filename \n");
	gets(rfile);
	printf("input dest filename \n");
	gets(wfile);
	
	if( (fpr = fopen(rfile,"r")) == NULL ) {
		printf("cannot open file \n");
		exit(1);
	}
	if( (fpw = fopen(wfile,"r")) == NULL ) {
		printf("cannot open file \n");
		exit(1);
	}
	
	while( (ch = fgetc(fpr)) != EOF) {
		fputc(ch,fpw);
	}
	
	fclose(fpr);
	fclose(fpw);
	
	
	return 0;
}
