#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct
{
    int *pData;
    int length;
    int count;
} Array;

void init(Array *pArr, int length);
bool append(Array *pArr, int value);
bool insert(Array *pArr, int pos, int val);
bool delete (Array *pArr, int pos, int *pVal);
int get(Array *pArr, int pos);
bool isEmpty(Array *pArr);
bool isFull(Array *pArr);
void sort(Array *pArr);
void show(Array *pArr);
void inversion(Array *pArr);

int main(int argslen, char *args[])
{
    Array array;          // 会自动分配内存
    Array *pArr = &array; // 指针使用前必须有地址值
    init(pArr, 4);
    append(pArr, 2);
    append(pArr, 1);
    append(pArr, 3);
    append(pArr, 4);
    append(pArr, 5);
    show(pArr);
    printf("\nget 3 :  %d \n", get(pArr, 3));
    inversion(pArr);
    show(pArr);
    sort(pArr);
    show(pArr);

    return 0;
}

void init(Array *pArr, int length)
{
    pArr->pData = (int *)malloc(sizeof(int) * length);

    if (pArr->pData == NULL)
    {
        printf("malloc error.\n");
        return;
    }

    pArr->count = 0;
    pArr->length = length;
}

bool append(Array *pArr, int value)
{
    if (isFull(pArr))
    {
        printf("array is full \n");
        return false;
    }

    pArr->pData[pArr->count] = value;
    pArr->count += 1;
    return true;
}

bool insert(Array *pArr, int pos, int val)
{

    return true;
}

bool delete (Array *pArr, int pos, int *pVal)
{

    return true;
}

int get(Array *pArr, int pos)
{
    if (pos > pArr->count)
    {
        printf("pos greater than count");
        return -1;
    }
    return pArr->pData[pos - 1];
}

bool isEmpty(Array *pArr)
{
    return pArr->count == 0;
}

bool isFull(Array *pArr)
{
    return pArr->count == pArr->length;
}

void sort(Array *pArr)
{
    int i, j;
    for (i = 0; i < pArr->count - 1; i++)
    {
        for (j = i + 1; j < pArr->count; j++)
        {
            if (pArr->pData[i] > pArr->pData[j])
            {
                int t = pArr->pData[i];
                pArr->pData[i] = pArr->pData[j];
                pArr->pData[j] = t;
            }
        }
    }
}

void show(Array *pArr)
{
    int i;
    for (i = 0; i < pArr->count; i++)
    {
        printf("%d  ", pArr->pData[i]);
    }
    printf("\n");
}

void inversion(Array *pArr)
{
    int i = 0;
    int j = pArr->count - 1;

    while (i < j)
    {
        int t = pArr->pData[i];
        pArr->pData[i] = pArr->pData[j];
        pArr->pData[j] = t;

        i++;
        j--;
    }
}