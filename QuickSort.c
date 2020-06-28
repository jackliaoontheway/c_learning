#include <stdio.h>
#include <stdbool.h>

void quickSort(int *arr, int low, int high);

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
    int val = arr[low];
    int l = low;
    int r = high;
    while (l < r)
    {
        while (r > l && arr[r] >= val)
        {
            r--;
        }
        arr[l] = arr[r];

        while (l < r && arr[l] <= val)
        {
            l++;
        }
        arr[r] = arr[l];
    }
    arr[l] = val;
    quickSort(arr, low, l - 1);
    quickSort(arr, l + 1, high);
}