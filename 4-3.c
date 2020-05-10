#include <stdio.h>

int main() {
	
	int m,n;
	scanf("%d %d",&m,&n);
	int cnt = 0,sum = 0;
	int i;
	if(m == 1) {
		m = 2;
	}
	for(i=m;i <= n;i++) {
		int isPrime = 1;
		int j;
		for(j = 2; j < i - 1;j ++) {
			if( i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1) {
			cnt ++;
			sum += i;
		}
	}
	printf("%d %d",cnt,sum);
	
	
	return 0;
}
