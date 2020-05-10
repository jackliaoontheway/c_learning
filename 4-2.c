#include <stdio.h>

int main() {
	
	int n;
//	scanf("%d",&n);
	
	n = 9;
	
	int i = 1;
	while(i <= n) {
		int j = 1;
		while ( j <= i) {
			printf("%d*%d=%d",j,i,j*i);
			if(j * i < 10) {
				printf("   ");
			} else {
				printf("  ");
			}
			j ++;
		}
		printf("\n");
		i ++;
	}
	
	return 0;
}
