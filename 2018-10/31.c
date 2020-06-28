#include <stdio.h>

int main(int argslen, char * args []) {

	int a[10], *p, *s;
        for(p = a; p-a < 10; p++) {
            scanf("%d",p);
        }
        for(p=a,s=a;p-a<10;p++) {
            if(*p>*s) {
                s = p;
            }
        }
        printf("max=%d\n", *s );



}
