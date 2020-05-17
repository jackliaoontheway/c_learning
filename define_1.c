#include <stdio.h>


#define PI 3.1415926 // 不需要类型 和 等号 没有 ; 
#define FORMAT "%f\n" 

#define PI2 2*PI // pi * 2  注释

#define PRT printf("%f ", PI); \
			printf("%f ", PI2) 

#define _DEBUG // 没有值的宏  用于条件编译 

#define cube(x) (x*x*x) // 不能有 `;` 

#define MIN(a,b) ( (a) > (b) ? (b) : (a))  // 使用有参数的宏 一定要用括号的原则 

int main(int argc, char const *argv[]) {
	
	printf(FORMAT,PI * 3.0);
	printf(FORMAT,PI2);

	PRT;
	
	printf("%s:%d\n ", __FILE__,__LINE__);

	printf("%s,%s\n ", __DATE__,__TIME__);
	
	printf("%d\n",cube(5));
		
	return 0;
}

