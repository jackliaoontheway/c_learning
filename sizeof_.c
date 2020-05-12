#include <stdio.h>

int main() {
	
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(long)=%d\n",sizeof(long));
	printf("sizeof(double)=%d\n",sizeof(double));
	int a = 4;
	printf("sizeof(int)=%d",sizeof(a+100));
	
	return 0;
}
