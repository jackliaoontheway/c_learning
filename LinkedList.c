#include <stdio.h>
#include <stdlib.h>

#include "node.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	List list;
	int number;
	list.head = NULL;
	do{
		// ָ��ĵ�ַ ֵ ��Ӧ�����Ĳ����� ָ���ָ�� 
		scanf("%d",&number);
		if(number != -1) {
			add(&list,number);
		}
	} while(number != -1);


	return 0;
}
