#include <stdio.h>

int gAll;  // 全局变量没有初始化 默认为0
int *gP = &gAll; 

//const int gX = 12;
//const int g2 = 1;  // ？？？ 编译不通过 

// const double PI = 3.1415926;


int f(void);
int fStatic(void);

int main(int argc, char const *argv[]) {
	
	printf("int %s gAll=%d\n",__func__,gAll);
	f();
	printf("int %s gAll=%d\n",__func__,gAll);
	
	printf("int %s gP=%d\n",__func__,*gP);
	
	fStatic();
	fStatic();
	fStatic();
	return 0;
}

int f(void) {
	gAll += 2;
	return gAll;
}

int fStatic(void) {
	static int all = 1;
	printf("int %s fStatic=%d\n",__func__,all);
	all += 2;
	printf("int %s fStatic=%d\n",__func__,all);
	
	int k = 0;
	
	
	printf("&gAll=%p\n",&gAll);
	printf("&all=%p\n",&all);
	printf("&k=%p\n",&k);
}
