#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct {
	int *pData;
	int front;
	int rear;
	int length;
} Queue;

void init(Queue *pQueue,int length);
bool enQueue(Queue *pQueue,int val);
bool outQueue(Queue *pQueue,int *val);
void traverse(Queue *pQueue);
bool isFull(Queue *pQueue);
bool isEmpty(Queue *pQueue);


int main(int argslen, char *args []) {
	
	Queue queue;
	
	init(&queue,6);
	
	enQueue(&queue,1);
	enQueue(&queue,2);
	enQueue(&queue,3);
	enQueue(&queue,4);
	enQueue(&queue,1);
	enQueue(&queue,2);
	enQueue(&queue,3);
	enQueue(&queue,4);
	traverse(&queue);
	
	int outed;
	outQueue(&queue, &outed);
	
	printf("out :  %d \n",outed);
	traverse(&queue);
	
	outQueue(&queue, &outed);
	
	printf("out :  %d \n",outed);
	traverse(&queue);
	
	return 0;
}

void init(Queue *pQueue,int length) {
	pQueue->pData = (int*)malloc(sizeof(int) * length);
	pQueue->front = 0;
	pQueue->rear = 0;
	pQueue->length = length;
}

bool enQueue(Queue *pQueue,int val) {
	
	if(isFull(pQueue)) {
		printf("queue is full. \n");
		return false;
	}
	
	pQueue->pData[pQueue->rear] = val;
	pQueue->rear = (pQueue->rear + 1) % pQueue->length;
	
}

void traverse(Queue *pQueue) {
	
	int i = pQueue->front;
	while(i != pQueue->rear) {
		printf("%d ",pQueue->pData[i]);
		i = (i+1) % pQueue->length;
	}
	
	printf(" \n");
}

bool isFull(Queue *pQueue) {
	return ((pQueue->rear + 1) %  pQueue->length) == pQueue->front;
}
bool isEmpty(Queue *pQueue) {
	return pQueue->front == pQueue->rear;
}

bool outQueue(Queue *pQueue,int *val) {
	
	if(isEmpty(pQueue)) {
		printf("queue is empty. \n");
		return false;
	}
	
	*val = pQueue->pData[pQueue->front];
	
	pQueue->front = (pQueue->front + 1 ) % pQueue->length;
	
	return true;
}
















