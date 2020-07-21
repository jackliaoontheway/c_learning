#include <stdio.h>
int main() {

	char *p = "abc123\0efg";
	printf("%d\n",(int)sizeof(p));
	printf("%d\n",(int)sizeof(*p));

}
