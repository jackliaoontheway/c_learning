#include <stdio.h>

int main() {
	
	int i = 1;
//	int a = 019; compile error
//	int b = 0xDf;
//	printf("%d",b);

	int a,b;
	a = (2,3),a+1;
	printf("%d \n",a);
	
	printf("%d \n",(a = 2) && (b = -2));
	
	char ch,str[4],*strp = str;
//	ch = "MBA";
//	str = "MBA";
	strp = "MBA";
	
	char *p = "abc\0defssssss";
	printf("%d", sizeof(p));
	return 0;
}
