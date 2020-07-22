#include <stdio.h>
#define WID 80
#define LEN WID+20

int f(int n) {
	if(n == 1) return 1;
	else return n*n + f(n - 1);
}

int main() {
	//printf("%d", 10 << 3 + 1);
	
	int a [3][3] = {1,2,3,4,5,6,7,8,9}, *p = a;
	//printf("%d",a[1][2]);
	//printf("%d",*(*(p+1) + 1));
	
	printf("%d \n",*(p+1));
	printf("%d \n",p[4]);
	
	int ar [] = {1,2,3}, *ap = ar;	
	printf("%d \n",ap[1]);
	
	int x = LEN*3;
	printf("%d \n",x);
	
	
	int i;
	for(i=0;i<5;i++) {
		switch( i % 2) 
		{
			case 0 : printf("1\n");break;
			case 1 : printf("0\n");
		}
	}
	
	printf("%d \n",f(5));
	
	
	
	char * s1 = "first",*s2 = "second" , s[] = "program";
	strcpy(s+4,s2+2);
	strcpy(s+6,s1+1);
	puts(s);
	return 0;
}
