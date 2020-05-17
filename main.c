#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int max(int a , int b);  如果没有原型声明 编译器会猜 

#include "max.h"

int main(int argc, char *argv[]) {

//	int a = 5,b = 6;
	double a = 1.0, b =2.0;
	
	printf("%d \n" , max(a,b));
	
	
	return 0;
}
