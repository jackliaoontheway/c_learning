#include <stdio.h>

/**

使用碾转相除法计算两个数的最大公约数
如果 b == 0 结束 a是最大公约数
否则，计算 a / b 的余数 , a = b , b = 余数
回到第一步 

*/

void test() {
	int a , b;
	int t;
	int i;
	scanf("%d %d",&a,&b);
	for(i = 1;i <= (a > b ? b : a) ; i++) {
		if(a % i == 0 && b % i == 0) {
			t = i;
		}
	}
	printf("acd(%d,%d)=%d",a,b,t);
}

int main() {
	
	test();
	
	int a , b;
	int t;
	
	scanf("%d %d",&a,&b);
	
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
		printf("acd(%d,%d)=%d",a,b,t);
	}
	
	printf("acd(%d,%d)=%d",a,b,a);
	
	return 0;
}
