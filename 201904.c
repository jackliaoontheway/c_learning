#include <stdio.h>
#include <string.h>

void revstr(char * s) {
	int j;
	for(j = strlen(s) - 1; j >=0 ; j--) {
		printf("%c ", *(s+j) );
	}
}

double finalone() {
	
	
	
	double sum = 0;
	int i,j;
	for(i = 1; 1 ; i ++) {
		double m = 1;
		for(j = 1; j <= i; j++) {
			m *= j;
		}
		if(m > pow(10,6)) {
			break;
		}
		
		double d = 1/m;
		
		printf("%f  ",d);
		
		sum += d;
		printf("%f \n", sum);
	}
	return sum;
}


void main() {
	int a[7] = {4,7,2,8,5,9,1}, i , j , temp;
	
	for(i = 7; i > 1; i--) {
		for(j = 0 ; j < i - 1; j++) {
			if(a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for(i=0;i<7;i++) {
		printf("%d ", a[i]);
	}
	
	char ch [10] = "abcdef";
	revstr(ch);
		printf("\n");	printf("\n");
	int x,y;
	for(x=1; x < 10; x++) {
		for(y=1; y <= x; y++) {
			printf("%d ",y);
		}
		printf("\n");
	}
	
	printf("%f",finalone());
}
