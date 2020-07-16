#include <stdio.h>
int main() {

	int a [100];
	int b [100];
	int c [100];
	int i;
	for(i=0;i<100;i++) {
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		c[i] = a[i] + b[i];
	}


	for(i=0;i<100;i++) {
		printf(c[i]);
	}

	return 0;

}
