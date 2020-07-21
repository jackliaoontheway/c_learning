#include <stdio.h>

int main() {

	int x [] = {1,2,3};
	int *p = x;
	printf("%d\n",*p++);

	int a,b,c;
	printf("%d",(a=2,b=3,c=4));
}
