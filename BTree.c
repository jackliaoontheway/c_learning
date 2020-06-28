#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct Node{
    struct Node * pLChild;
    struct Node * pRChild;
    char data;
} TreeNode;

TreeNode * createTree(void);
void preTraverse(TreeNode *pTree);
void inTraverse(TreeNode *pTree);
void postTraverse(TreeNode *pTree);


void preTraverse(TreeNode *pTree) {
    if(pTree == NULL) {
        return;
    }
    printf("%c  " , pTree->data);

    preTraverse(pTree->pLChild);
    preTraverse(pTree->pRChild);
}

void inTraverse(TreeNode *pTree) {
    if(pTree == NULL) {
        return;
    }
    inTraverse(pTree->pLChild);
    printf("%c  " , pTree->data);
    inTraverse(pTree->pRChild);
}

void postTraverse(TreeNode *pTree) {
    if(pTree == NULL) {
        return;
    }
    postTraverse(pTree->pLChild);
    postTraverse(pTree->pRChild);
    printf("%c  " , pTree->data);
}

int main(int argslen, char * args []) { 

    TreeNode *pTree = createTree();
    preTraverse(pTree);
    printf("\n");
    inTraverse(pTree);
    printf("\n");
    postTraverse(pTree);
    printf("\n");
    return 0;
}

TreeNode * createTree(void) {
    TreeNode *pA = (TreeNode*)malloc(sizeof(TreeNode));
    pA->data = 'A';
    TreeNode *pB = (TreeNode*)malloc(sizeof(TreeNode));
    pB->data = 'B';
    TreeNode *pC = (TreeNode*)malloc(sizeof(TreeNode));
    pC->data = 'C';
    TreeNode *pD = (TreeNode*)malloc(sizeof(TreeNode));
    pD->data = 'D';
    TreeNode *pE = (TreeNode*)malloc(sizeof(TreeNode));
    pE->data = 'E';
    TreeNode *pF = (TreeNode*)malloc(sizeof(TreeNode));
    pF->data = 'F';

    pA->pLChild = pB;
    pA->pRChild = pC;

    pB->pLChild = pD;
    pB->pRChild = pE;

    pC->pLChild = NULL;
    pC->pRChild = pF;

    pD->pLChild = NULL;
    pD->pRChild = NULL;

    pE->pLChild = NULL;
    pE->pRChild = NULL;

    pF->pLChild = NULL;
    pF->pRChild = NULL;

    return pA;
}