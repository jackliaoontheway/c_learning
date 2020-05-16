#include <stdio.h>
#include <string.h>


char* mycpy(char * dst,const char * src) {
	int idx = 0;
	while(src[idx]) {
		dst[idx] = src[idx];
		idx ++;
	}
	dst[idx] = '\0';
	return dst;
}

char* mycpy2(char * dst,const char * src) {
	while(*dst++ = *src++);
	*dst = '\0';
	return dst;
}


int main() {
	
	char * str = "a";
	char * dst = "b";
	
	strcpy(dst,str);
	
	printf("%s \n",str);
	
	return 0;
}


