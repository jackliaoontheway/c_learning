#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
	struct Node *pNext;
	int data;
} NODE,* PNODE;  // NODE == struct Node,  PNODE == struct Node *

PNODE create_list(void);
void traverse_list(PNODE pNode);
bool is_empty(PNODE pNode);
int length_list(PNODE pNode);
bool insert_list(PNODE,int,int);
bool delete_list(PNODE, int,int);
void sort_list(PNODE);

int main(int argslen,char * args []) {
	
	PNODE pHead = NULL; // == struct Node *pHead = NULL;
	pHead = create_list();
	traverse_list(pHead);
	
	bool isEmpty = is_empty(pHead);
	printf("is empty ? %d \n",isEmpty);

	int len = length_list(pHead);
	printf("length : %d \n", len);
	
	sort_list(pHead);
	traverse_list(pHead);
	
	return 0;
}

PNODE create_list(void) {
	
	int len;
	int i;
	int val;
	

	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	if(pHead == NULL) {
		printf("malloc error.");
		exit(-1);
	}
	PNODE pTail = pHead;
	printf("current pHead-pNext : %p \n",pHead->pNext);
	pTail->pNext = NULL;//这里之所以要设为NULL,是因为 malloc 分配内存之后 pNext默认会分配内存，这里在循环的时候 会死循环   pTail的 pNext 一定是NULL 
	
	printf("请输入链表长度: ");
	scanf("%d",&len);
	
	for	(i = 0;i < len; i++) {
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		printf("请输入数字: ");
		scanf("%d",&val);
		
		pNew->data = val;
		pTail->pNext = pNew;
		pTail = pNew;

		pTail->pNext = NULL; // 这里之所以要设为NULL,是因为 malloc 分配内存之后 pNext默认会分配内存，如果不设NULL，这里在循环的时候 会死循环 
	}
	
	return pHead;
}

void traverse_list(PNODE pHead) {
	
	PNODE p = pHead->pNext;
	
	while( p != NULL) {
		printf("%d \n",p->data);
		p = p->pNext;
	}
	
}

bool is_empty(PNODE pNode) {
	return pNode->pNext == NULL;
}


int length_list(PNODE pNode) {
	PNODE p = pNode->pNext;
	int len;
	while( p != NULL) {
		len ++;
		p = p->pNext;
	}
	return len;
}

bool insert_list(PNODE pHead,int i,int value) {
	return false;
}

bool delete_list(PNODE pHead, int i,int value) {
	return false;
}

void sort_list(PNODE pHead) {
	PNODE p = pHead->pNext;
	while(p->pNext != NULL) {
		PNODE q = p->pNext;
		while(q != NULL) {
			if(q->data < p->data) {
				int t = p->data;
				p->data = q->data;
				q->data = t;
			}
			q = q->pNext;
		}
		p = p->pNext;
	}
}
