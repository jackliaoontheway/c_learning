#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

/*
typedef struct Array {

} *PArr,Arr;

PArr ar;  // ==>  struct Array * ar;
Arr arr;  // ==>  struct Array arr;

*/

struct Array {
	int * pBase;
	int len;
	int cnt;
};

void init_arr(struct Array * pArr,int length);
bool append_arr(struct Array *pArr,int number);
bool insert_arr(struct Array *pArr,int pos,int val);
bool delete_arr(struct Array *pArr,int pos,int *pVal);
int get(struct Array *pArr,int pos);
bool is_empty(struct Array *pArr);
bool is_full(struct Array *pArr);
void sort_arr(struct Array *pArr);
void show_arr(struct Array *pArr);
void inversion_arr(struct Array *pArr);

int main(int argslen, char * args []) {
	
	struct Array arr;
	
	init_arr(&arr,10);
	
	append_arr(&arr,1);
	append_arr(&arr,2);
	append_arr(&arr,3);

	// insert_arr(&arr,3,9);

	inversion_arr(&arr);

	// int deleted;
	// delete_arr(&arr,1,&deleted);
	// printf("deleted:   %d  \n",deleted);

	sort_arr(&arr);

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
	return pArr->cnt == 0;
}

bool is_full(struct Array *pArr) {
	return pArr->cnt == pArr->len;
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

bool insert_arr(struct Array *pArr,int pos,int val){
	if(is_full(pArr)) {
		printf("Array is full\n");
		return false;
	}
	if(pos < 1 || pos > pArr->cnt) {
		return false;
	}
	int i ;
	for(i = pArr->cnt -1; i >= pos-1; i--) {
		pArr->pBase[i + 1] = pArr->pBase[i];
	}
	pArr->pBase[pos - 1] = val;
	(pArr->cnt)++;
}

bool delete_arr(struct Array *pArr,int pos,int *pVal) {

	if(is_empty(pArr)) {
		printf("Array is empty\n");
		return false;
	}
	if(pos < 1 || pos > pArr->cnt) {
		return false;
	}

	*pVal = pArr->pBase[pos - 1];

	int i ;
	for(i = pos; i < pArr->cnt; i++) {
		pArr->pBase[i - 1] = pArr->pBase[i];
	}
	
	(pArr->cnt)--;
	return true;
}


void inversion_arr(struct Array *pArr) {
	int i = 0;
	int j = pArr->cnt - 1;

	while(i < j) {
		int t = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = t;

		i++;
		j--;
	}
}


void sort_arr(struct Array *pArr) {
	int i,j;
	for(i = 0; i < pArr->cnt; i++) {
		for(j = i + 1; j < pArr->cnt; j++) {
			if(pArr->pBase[i] > pArr->pBase[j]) {
				int t = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = t;
			}
		}
	}
}
