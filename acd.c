#include <stdio.h>

/**

ʹ����ת��������������������Լ��
��� b == 0 ���� a�����Լ��
���򣬼��� a / b ������ , a = b , b = ����
�ص���һ�� 

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
