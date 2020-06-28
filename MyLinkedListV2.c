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
bool remove_(Node *pHead,Node **pTail, int pos,int *val);
void sort(Node *);


int main(int argslen, char * args []) {
	
	Node *pHead = create();
	Node *pTail = pHead;
	
	append(&pTail,1);
	
	append(&pTail,2);
	
	append(&pTail,3);
	
	traverse(pHead);
	
	insert(pHead,&pTail,3,4);
	
	traverse(pHead);
	
	append(&pTail,5);
	append(&pTail,6);
	
	traverse(pHead);

	int len = length(pHead);
	printf("length : %d \n",len);

	int deleted = 0;
	remove_(pHead,&pTail,6,&deleted);
	printf("deleted : %d \n",deleted);

	traverse(pHead);
	append(&pTail,7);
	traverse(pHead);

	sort(pHead);
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

int length(Node *pHead) {
	int length = 0;
		
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

bool remove_(Node *pHead,Node **pTail, int pos,int *val) {

	if(pos < 1) {
		printf("remove_ error pos < 1 \n");
		return false;
	}
	
	if(pos > length(pHead)) {
		printf("remove_ error pos > length\n");
		return false;
	}
	
	int i = 0;
		
	Node *p = pHead;
	while(p != NULL && i < pos - 1) {
		i++;
		p = p->pNext;
	}
	
	Node *pDelete = p->pNext;
	*val = pDelete->data;

	p->pNext = p->pNext->pNext;
	free(pDelete);
	pDelete = NULL;
	
	if(p->pNext == NULL) {
		*pTail = p;
	}
	return true;
}

void sort(Node *pHead) {
	Node *p = pHead->pNext;
	while(p != NULL) {
		Node *q = p->pNext;
		while(q != NULL) {
			if(p->data > q->data) {
				int t = p->data;
				p->data = q->data;
				q->data = t;
			}
			q = q->pNext;
		}

		p = p->pNext;
	}
}




