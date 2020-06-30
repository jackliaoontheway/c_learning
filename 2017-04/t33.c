#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *p = fopen("a.txt","w");
	if(p == NULL) {
		printf("Cannot open this file");
		exit(1);
	}
	char c;
	for(c=65;c<=95;c++) {
		fputc(c,p);
	}
	fclose(p);
}
