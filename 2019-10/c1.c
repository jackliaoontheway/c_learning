#include <stdio.h>

int main() {

	char ar [][6] = {"hello","world"};
	char *p = ar[0];
	printf("%c \n",ar[1][1]);
	printf("%c \n", p[1]);
	
	int a [3][3] = {{1,2,3},{},{7,8,9}};
       	int (*pa)[3] = a;
	printf("%d \n", a[2][2]);
	printf("%d \n", *(*(pa + 2)+2) );	

	
	printf("%d \n", *a[2]);
	printf("%d \n", *a[0]);
	printf("%d \n", *(*a));

	printf("%d \n", (*(a+2))[2] ); // == a[2][2]
	printf("%d \n", *(*(a+2) + 2) ); // == a[2][2]

	printf("%p \n",a[0] );
	printf("%p \n",a);
	printf("%p \n",*a);
	printf("%p \n",&a[0]);
	printf("%p \n",&a);

	printf("%p \n", *(a+2));
	printf("%p \n", *a + 2);

}
