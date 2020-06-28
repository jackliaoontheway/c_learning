#include <stdio.h>
#include <stdbool.h>

int main(int argslen, char * args []) {


	double result = 1;
        double i = 1;
        bool flag = 0;
        while( 1 ) {
            i += 2;
            if(i > 1e6) {
                break;
            }
            if(flag) {
                result += (1 / i);
            } else {
                result -= (1 / i);
            }
            flag = !flag;
        }
	
	double pi = 4 * result;
        printf("%lf",pi);


}
