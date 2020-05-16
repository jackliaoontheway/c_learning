#include <stdio.h>
#include <string.h>

int myCmp(const char *str1,const char *str2) {
	int idx = 0;
	while(str1[idx] == str2[idx] && str1[idx] != '\0') {
		idx ++;
	}
	return str1[idx] - str2[idx];
}

int myCmp2(const char *str1,const char *str2) {
	while(*str1 == *str2 && *str1 != '\0') {
		str1 ++;
		str2 ++;
	}
	return *str1 - *str2;
}



int main() {
	
	char * str1 = "abc";
	char * str2 = "abcb";
	
	printf("str cmp : %d \n", strcmp(str1,str2));
	// 0 : ==
	// -1
	// 1 
	
	if(strcmp(str1,str2) == 0) {
		printf("equal");
	}
	
	
	printf("str myCmp : %d \n", myCmp(str1,str2));
	printf("str myCmp2 : %d \n", myCmp2(str1,str2));
	
	
	return 0;
}


