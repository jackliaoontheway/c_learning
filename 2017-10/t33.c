#include <stdio.h>

int isTrangle(int,int,int);

int main() {

	int a,b,c;
	printf("please input 3 numbers :");
	scanf("%d %d %d",&a,&b,&c);

	if(isTrangle(a,b,c)) {
		printf("circumference: %d",a+b+c);
	} else {
		printf("No Trangle");
	}


	return 0;
}

int isTrangle(int a,int b,int c) {

	if(a + b <= c || a + c <= b || b + c <= a) {
		return 0;
        } else {
		return 1;	
        }

}
