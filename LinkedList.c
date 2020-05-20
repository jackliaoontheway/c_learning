#include <stdio.h>
#include <stdlib.h>

#include "node.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	List list;
	int number;
	list.head = NULL;
	do{
		// 指针的地址 值 对应函数的参数是 指针的指针 
		scanf("%d",&number);
		if(number != -1) {
			add(&list,number);
		}
	} while(number != -1);


	return 0;
}
