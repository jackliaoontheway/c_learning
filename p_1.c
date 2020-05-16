#include <stdio.h>

void swap(int *a, int *b) {
	
	int t = *b;
	*b = *a;
	*a = t;
	

}


int main() {
	
//	int a = 1,b = 2;
//	swap(&a,&b);
//	
//	printf("%d %d" , a , b);


	int i = 0;
	int p = (int)&i;
	
//	printf("0x%x\n",&i);
//	printf("%p\n",&i);
//	printf("%p\n",p);
	
	int  a [2] = {};
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	
	printf("\n");printf("\n");
	
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	printf("%d\n",a[2]);
		
	return 0;
}


