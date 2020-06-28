#include <stdio.h>

int fun(int x,int y, int z) {
	int ma;
	ma = x > y ? x : y;
	if(z > ma) ma = z;
	return ma;
}

int main(int argslen, char * args []) {
	
	
	
	printf("max = %d \n", fun(0,2,4));
	
	return 0;
}
