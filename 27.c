#include <stdio.h>

int main(int argslen, char * args []) {
	
	int a[3][3] = {1,4,17,3,6,9,2,5,8},i,t=0;
	for(i=0;i<=2;i++) {
		t += a[i][2 - i];
	}
	
	printf("t = %d \n", t);
	
	return 0;
}
