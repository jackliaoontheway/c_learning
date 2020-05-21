#include <stdio.h>
#include <stdlib.h>

#include "node.h"

void add(List *pList, int number) {
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	Node *last = pList->head;
	if(last) {
		while(last->next) {
			last = last->next;
		}
		last->next = p;
	} else {
		pList->head = p;
	}
}

void print(List *pList) {
	Node *p;
	for(p = list.head; p; p= p->next) {
		printf("%d",p->value);
	}

}


