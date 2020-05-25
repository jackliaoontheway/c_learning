#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

struct Array {
	int * pBase;
	int len;
	int cnt;
};

void init_arr(struct Array * pArr,int length);
bool append_arr();
bool insert_arr();
bool delete_arr();
int get();
bool is_empty();
bool is_full();
void sort_arr();
void show_arr();
void inversion_arr();

int main(int argslen, char * args []) {
	
	struct Array arr;
	
	init_arr(&arr,100);
	
	append_arr(&arr,1);
	append_arr(&arr,2);
	append_arr(&arr,3);
	
	show_arr(&arr);
	
	return 0;
}

void init_arr(struct Array * pArr,int length) {
	pArr->pBase = (int*)malloc(sizeof(int)*length);
	if(pArr->pBase == NULL) {
		printf("malloc error.");
		//exit(-1);
		return;
	}
	pArr->len = length;
	pArr->cnt = 0;
}

bool is_empty(struct Array *pArr) {
	if(pArr -> cnt == 0) {
		printf("Array is empty");
		return true;	
	}
	return false;
}

void show_arr(struct Array *pArr) {
	if(is_empty(pArr)) {
		return;	
	}
	int i;
	for(i = 0; i<pArr->cnt; i++) {
		printf("%d \n",(pArr->pBase)[i]);
	}
}

bool append_arr(struct Array *pArr,int number) {
	pArr->pBase[pArr->cnt] = number;
	pArr->cnt += 1;
}
