#include <stdio.h>

#include <math.h>

#define SWAP(x,y,z) (z=x,x=y,y=z) 

#define X(m,n) m%n
#define Y(a,b) pow((a+b),3)

int main() {
	
	int a=3,b=4,c;
	SWAP(a,b,c);
	printf("%d,%d,%d \n",a,b,c);
	
	
	int m = 1 , n = 2,r,s;
	r = X(m,n);
	s = Y(m,n);
	printf("%d,%d",r,s);
	
	return 0;
}
