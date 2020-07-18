#include <stdio.h>

#define MAX(x,y,z) (x>y?(x>z?x:z) : (y>z?y:z))
int main() {
	
	int a=3,b=4,c=5;
	
	printf("%d,",MAX(a,b,c));
	printf("%d,",MAX(a*b,b,b+a));
	printf("%d,",MAX(a,b+c,a*c));
		
	return 0;
}
