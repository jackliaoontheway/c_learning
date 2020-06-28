#include <stdio.h>

int main(int argslen, char * args []) {
	
	int s = 0, i;
	for(i = 1; ; i++) {
		if(s > 10) break;
		if(i % 2 == 0) s+= i;
	}
	
	printf("i=%d,s=%d",i,s);
	return 0;
}
