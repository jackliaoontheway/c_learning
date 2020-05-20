#include <stdio.h>
#include <stdlib.h>
#include "array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	Array a = array_create(100);
	
	*array_at(&a,0) = 10;


	array_free(&a);
	
	return 0;
}
