#include <stdio.h>
#include <string.h>

int myStrLen(const char * str) {

	int index = 0;
	
	while (str[index] != '\0') {
		index ++;
	}

	return index;
}



int main() {
	
	char * str = "Hello";
	
	printf("str length : %d \n", myStrLen(str));
	
	printf("str length : %d \n", strlen(str));
	
	
	return 0;
}


