#include <stdio.h>
#include <string.h>


int main() {
	
	char * str = "abc";
	char * dst = "def";
	
	dst = strcat(dst,str);
	
	printf("%s \n",dst);
	
	return 0;
}


