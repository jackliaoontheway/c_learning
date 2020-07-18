#include <stdio.h>
#define PRT printf
#define NL "\n"
#define D "%d" NL
#define S "%s"
int main() {
	
	int a = 2;
	char s[] = "STRING";
	
	printf("%d""\n",a);
	
	PRT(D,a);
	PRT(S,s);
		
	return 0;
}
