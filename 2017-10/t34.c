#include <stdio.h>

int main(int argslen, char * args []) {

	int i,j;
	for(i=1;i<10;i++) {
		for(j=1;j<=i;j++) {
			printf("%d ",j*i);
		}
		printf("\n");
	}

	return 0;
}
