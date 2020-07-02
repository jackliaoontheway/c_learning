#include <stdio.h>

float f (int x,int n);

int main(int argslen, char * args []) {

  float result;
  int x,n;
  printf("please input 2 numbers use , seperated : ");
  scanf("%d,%d",&x,&n);

  result = f(x,n);

  printf("call f result: = %.1f",result);

  return 0;
}


float f(int x, int n) {
  int i,j;
  float t,result = 0;
  for(i=1;i <= n; i++) {
    t = x;
    for(j=1; j<n; j++) {
      t *= x;
    }
    result += t / i;
  }
  return result;
}



