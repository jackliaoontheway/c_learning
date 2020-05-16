#include <stdio.h>
#include <string.h>


int main() {
	
	char * str = "abc";

	char *r = strchr(str,'b');
	
	printf("%s \n",r);
	
	return 0;
}


