#include <stdio.h>

int sum(int n) {
	if(n == 1) {
		return 1;
	}
	return n * n + sum(n - 1);
}

int main(int argslen, char * args []) {
	
	
	
	printf("SUM = %d \n", sum(5));
	
	return 0;
}
