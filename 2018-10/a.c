#include <stdio.h>
#include <string.h>

struct {int a,b;} d[3] = {{1,4},{2,5},{6,7}};

int main(int argslen, char * args []) {

	char s [] = {"China"};
	printf("%ld,%ld\n",sizeof(s),strlen(s));
	

	int m,n=0,*p1=&m;
	*p1 = *&n;

	printf("%d \n",*p1);
	printf("%d \n",m);

	printf("%d\n",d[2].a*d[2].b/d[1].b);

	char str[] = {'a','b','\0','c','d','\0'};
	printf("%s\n",str);
	
	int b[][3] = {1,2,3,4,5,6,7};
	// printf("%f", (sizeof(b[0]) / sizeof(int)) );

	int x = 1,y = -1;
	printf("%d\n",x--&++y);
	
	int a,b[5];double c;char d;
	--a;
	b--;
	++c;
	d++;

	int cs1 = 02689;
	int cs2 = 0x16x;
	int cs3 = 0e0.0;
	int cs4 = 1E3;

}
