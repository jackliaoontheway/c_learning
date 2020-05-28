#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct Node_ {
	struct Node_ *pNext;
	int data;
} Node;

Node* create(void);
bool append(Node **pTail,int val);
void traverse(Node *);
bool isEmpty(Node *);
int length(Node *);
bool insert(Node *,int pos,int val);
bool remove_(Node *, int pos,int *val);
void sort(Node *);


int main(int argslen, char * args []) {
	
	Node *pHead = create();
	Node *pTail = pHead;
	
	append(&pTail,1);
	
	append(&pTail,2);
	
	append(&pTail,1);
	
	traverse(pHead);
	
	return 0;
}


Node* create(void) {
	Node *pHead = (Node*)malloc(sizeof(Node));
	pHead->pNext = NULL;
	return pHead;
}

bool append(Node **pTail,int val) {
	Node *pNew = (Node*)malloc(sizeof(Node));
	pNew->data = val;
	pNew->pNext = NULL;
	
	(*pTail)->pNext = pNew;
	
	*pTail = pNew;
	
	return true;
}

void traverse(Node *pHead) {
	Node *p = pHead->pNext;
	
	while(p != NULL) {
		printf("%d ",p->data);
		p = p->pNext;
	}
	
	printf("\n");
}

bool isEmpty(Node *pHead) {
	return pHead->pNext == NULL;
}

int length(Node *) {
	
}





