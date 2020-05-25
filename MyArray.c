#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

struct Array {
	int * pBase;
	int len;
	int cnt;
};

void init_arr(struct Array * pArr,int length);
bool append_arr(struct Array *pArr,int number);
bool insert_arr((struct Array *pArr,int pos,int val);
bool delete_arr();
int get();
bool is_empty(struct Array *pArr);
bool is_full(struct Array *pArr);
void sort_arr();
void show_arr();
void inversion_arr();

int main(int argslen, char * args []) {
	
	struct Array arr;
	
	init_arr(&arr,0);
	
	append_arr(&arr,1);
	append_arr(&arr,2);
	append_arr(&arr,3);
	
	show_arr(&arr);
	
	return 0;
}

void init_arr(struct Array * pArr,int length) {
	pArr->pBase = (int*)malloc(sizeof(int)*length);
	if(pArr->pBase == NULL) {
		printf("malloc error.\n");
		//exit(-1);
		return;
	}
	pArr->len = length;
	pArr->cnt = 0;
}

bool is_empty(struct Array *pArr) {
	if(pArr->cnt == 0) {
		return true;	
	}
	return false;
}

bool is_full(struct Array *pArr) {
	if(pArr->cnt == pArr->len) {
		return true;
	} 
	return false;
}

void show_arr(struct Array *pArr) {
	if(is_empty(pArr)) {
		printf("Array is empty\n");
		return;	
	}
	int i;
	for(i = 0; i<pArr->cnt; i++) {
		printf("%d \n",(pArr->pBase)[i]);
	}
}

bool append_arr(struct Array *pArr,int number) {
	if(is_full(pArr)) {
		printf("Array is full\n");
		return false;
	}
	pArr->pBase[pArr->cnt] = number;
	(pArr->cnt)++;
//	pArr->cnt += 1;
}

bool insert_arr((struct Array *pArr,int pos,int val){
	if(is_full(pArr)) {
		printf("Array is full\n");
		return false;
	}
	if(pos < 1) {
		return false;
	}
	int i ;
	for(i = pArr->cnt -1; i >= pos-1; i--) {
		pArr->pBase[i + 1] = pArr->pBase[i];
	}
	pArr->pBase[pos - 1] = val;
}
