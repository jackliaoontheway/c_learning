#include <stdio.h>


#define PI 3.1415926 // ����Ҫ���� �� �Ⱥ� û�� ; 
#define FORMAT "%f\n" 

#define PI2 2*PI // pi * 2  ע��

#define PRT printf("%f ", PI); \
			printf("%f ", PI2) 

#define _DEBUG // û��ֵ�ĺ�  ������������ 

#define cube(x) (x*x*x) // ������ `;` 

#define MIN(a,b) ( (a) > (b) ? (b) : (a))  // ʹ���в����ĺ� һ��Ҫ�����ŵ�ԭ�� 

int main(int argc, char const *argv[]) {
	
	printf(FORMAT,PI * 3.0);
	printf(FORMAT,PI2);

	PRT;
	
	printf("%s:%d\n ", __FILE__,__LINE__);

	printf("%s,%s\n ", __DATE__,__TIME__);
	
	printf("%d\n",cube(5));
		
	return 0;
}

