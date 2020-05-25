#include <stdio.h>

void change(int **p);

int main(int argslen,char *args []) {

  int i = 0;
  int *p = &i;

  change(&p);
  
  printf("%p\n",p);
  printf("%p\n",p);

  printf("%d \n",i);
  printf("%d \n", *p);
}

void change(int **p) {
  int x = 1;
  *p = &x;
  **p = 123;
}
