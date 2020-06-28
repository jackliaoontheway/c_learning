#include <stdio.h>
#include <string.h>
#include <math.h>

double fun(int n) {
	double y;
	if(n == 0 || n == 1) return 1;
	y = n * fun(n - 1);
	return y;
}

int main() {
	
	int m;
	double sum = 0;
	for(m = 1;fun(m) < pow(10,6);m++) {
		sum = sum + 1 / fun(m);
	}
	
	printf("%d",sum);
	
	return 0;
}
