#include <stdio.h>
#include <math.h>
#define MAX pow(10,6)

int mul(int n) {
	int result = 1,i;
	for(i=1;i<=n;i++) {
		result *= i;
	}
	return result;
}

double f(double sum,int x) {
	int m = mul(x);
	if( m >= MAX ) {
		return sum;
	}
	sum += (1.0 / m);
	return f(sum,++x);
}

double fun() {
	int max = pow(10,6);
	int i = 1,j;
	double temp;
	double sum = 0;
	while (1) {
		temp = 1.0;
		for(j=1;j<=i;j++) {
			temp *= j;
		}
		if(temp >= max) {
			break;
		}
		sum += (1.0/temp);
		i++;
	}
	printf("%f \n",sum);
}

int main() {
	fun();
	printf("%f",f(0.0,1));
	
	return 0;
}
