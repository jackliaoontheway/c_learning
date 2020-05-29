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
bool insert(Node *,Node **pTail,int pos,int val);
bool remove_(Node *, int pos,int *val);
void sort(Node *);


int main(int argslen, char * args []) {
	
	Node *pHead = create();
	Node *pTail = pHead;
	
	append(&pTail,1);
	
	append(&pTail,2);
	
	append(&pTail,1);
	
	traverse(pHead);
	
	int len = length(pHead);
	printf("length : %d \n",len);
	
	insert(pHead,&pTail,3,99);
	
	traverse(pHead);
	
	append(&pTail,88);
	append(&pTail,88);
	
	traverse(pHead);
	
	return 0;
}


Node* create(void) {
	//Node head;
	//Node *pHead = &head; ???
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

int length(Node *pHead) {
	int length;
		
	Node *p = pHead->pNext;
	while(p != NULL) {
		length++;
		p = p->pNext;
	}
	
	return length;
}

bool insert(Node *pHead,Node **pTail,int pos,int val) {
	
	if(pos < 1) {
		printf("insert error pos < 1");
		return false;
	}
	
	if(pos > length(pHead)) {
		printf("insert error pos > length");
		return false;
	}
	
	Node *pNew = (Node*)malloc(sizeof(Node));
	pNew->data = val;
	pNew->pNext = NULL;
	
	int i = 0;
		
	Node *p = pHead;
	while(p != NULL && i < pos - 1) {
		i++;
		p = p->pNext;
	}
	
	pNew->pNext = p->pNext;
	p->pNext = pNew;
	
	if(pNew->pNext == NULL) {
		*pTail = pNew;
	}
	
	return true;
}

bool remove_(Node *pHead, int pos,int *val) {
	return true;
}

void sort(Node *pHead) {
	
}




