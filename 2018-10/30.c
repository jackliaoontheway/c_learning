#include <stdio.h>
#include <stdlib.h>

int main(int argslen, char * args []) {
	int count = 0;
        char ch;
        while((ch = getchar()) != '\n' ) {
            if('0' <= ch &&  ch <= '9') {
                count ++;
            }
            
        }
        printf("%d",count);
}
