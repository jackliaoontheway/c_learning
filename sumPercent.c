#include <stdio.h>


int main() {
	int i ;
	int n ;
	double sum = 0.0;
	// scanf("%d",&n);

	n = 100;
	double sign = 1.0;
	for(i = 1; i <= n; i++) {
		sum +=  sign  / i;
		sign = -sign;
	}
	
	// ����� double ���� ��Ҫʹ�� %f 
	printf("f(%d)=%f", n, sum);
}
