#include <stdio.h>
#include <stdlib.h>

int main() {
  char ch;
  FILE *p = fopen("ch.txt","w");
  if(p == NULL) {
	printf("Cannot open this file");
	exit(1);
  }
  while( (ch = getchar()) != '#') {
	putchar(ch);
	fputc(ch,p);
  }

  fclose(p);
  return 0;
}
