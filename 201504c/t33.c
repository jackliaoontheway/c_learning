#include <stdio.h>
int main() {


	int n;
	scanf("%d",&n);

	if(n < 100 || n > 999) {
		printf("input error.");
	}

	int x = n % 10;
	int y = n / 100;
	
	if(x == y) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;

}
