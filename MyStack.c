#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node_ {
	int data;
	struct Node_ *pNext;
} Node;

typedef struct {
	Node *pTop;
	Node *pBottom;
} Stack;

void init(Stack *pStack);
void iterater(Stack *pStack);
bool push(Stack *pStack,int val);
bool pop(Stack *pStack, int *val);
bool isEmpty(Stack *pStack);
void clear(Stack *pStack);

int main(int argslen, char *args []) {
	
	Stack stack;
	Stack *pStack = &stack;
	init(pStack);
	push(pStack,1);
	push(pStack,2);
	push(pStack,3);
	iterater(pStack);
	
	int poped;
	pop(pStack,&poped);
	printf("poped  :  %d \n",poped);
	iterater(pStack);
	clear(pStack);
	printf("after print \n");
	iterater(pStack);
}


void init(Stack * pStack) {
	pStack->pBottom = (Node*)malloc(sizeof(Node));
	if(pStack->pBottom == NULL) {
		printf("malloc error.");
		exit(-1);
		return;
	}
	pStack->pTop = pStack->pBottom;
	pStack->pTop->pNext = NULL;
}

void iterater(Stack * pStack) {
	Node *p = pStack->pTop;
	while(p != pStack->pBottom) {
		printf("%d  ",p ->data);
		p = p->pNext;
	}
	
	printf("\n");
}

bool push(Stack *pStack , int val) {
	Node *pNew = (Node*)malloc(sizeof(Node));
	
	pNew->pNext = pStack->pTop;
	pNew->data = val;
	pStack->pTop = pNew;
	
	return true;
}

bool isEmpty(Stack *pStack) {
	return pStack->pBottom == pStack->pTop;
}

bool pop(Stack *pStack, int *val) {
	
	if(isEmpty(pStack)) {
		return false;
	}
	
	Node *pTop = pStack->pTop;
	*val = pTop->data;
	
	pStack->pTop =  pTop->pNext;
	
	free(pTop);
	pTop = NULL;
	
	return true;
}

//void clear(Stack *pStack) {
//	Node *p = pStack->pTop;
//	Node *q = NULL;
// 	while(p != pStack->pBottom) {
//		q = p->pNext;
//		free(p);
//		p = q;
//	}
//	pStack->pTop = pStack->pBottom;
//}

void clear(Stack *pStack) {
	Node *p = pStack->pTop;
 	while(p != pStack->pBottom) {
 		Node *temp = p->pNext;
		free(p);
		//printf("%p \n",p);
		//printf("%p \n",p->pNext);
		p = temp;
	}
	pStack->pTop = pStack->pBottom;
}







