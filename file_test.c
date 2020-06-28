#include <stdio.h>
#include <stdlib.h>

char convert(char c) {
	char result;
	if(c == '0') {
		result = 'Z';
	}
		if(c == '1') {
		result =  'Y';
	}
		if(c == '2') {
		result = 'X';
	}
		if(c == '3') {
		result = 'W';
	}
	return result;
					
}

int main(int argslen, char * args []) {
	char ch;
	FILE *fpr,*fpw;
	if((fpr = fopen("otd.txt","r")) == NULL) {
		printf("Cannot open the file");
		exit(0);
	}
	if((fpw = fopen("new.txt","w")) == NULL) {
		printf("Cannot open the file");
		exit(0);
	}
	while((ch = fgetc(fpr)) != EOF)
	{
		if(ch >= '0' && ch <= '9') {
			ch = convert(ch);
		}
		fputc(ch,fpw);
	}
	
	fclose(fpr);
	fclose(fpw);
	return 0;
}
