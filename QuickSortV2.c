#include <stdio.h>
#include <stdbool.h>

void quickSort(int *arr, int low, int high);
int findPos(int *arr, int low, int high);

int main(int argslen, char *args[])
{

    int arr[] = {5, 4, 3, 2, 1};
    quickSort(arr, 0, 4);

    int i = 0, len = 5;
    for (; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void quickSort(int *arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pos = findPos(arr, low, high);
    quickSort(arr, low, pos - 1);
    quickSort(arr, pos + 1, high);
}

int findPos(int *arr, int low, int high) {
    int val = arr[low];
    while(low < high) {
        while(high > low && arr[high] >= val) {
            high --;
        }
        arr[low] = arr[high];
        while(low < high && arr[low] <= val) {
            low ++;
        }
        arr[high] = arr[low];
    }
    arr[low] = val;
    return low;
}