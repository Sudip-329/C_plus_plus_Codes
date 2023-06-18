#include <stdio.h>
#include <stdlib.h>

void display(int *a,int n)
{
    printf("Elements in sorted way: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
}

int partition(int a[], int low, int high)
{
    int start, end, pivot;
    start = low;
    end = high;
    pivot = a[start];
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    int tem = a[low];
    a[low] = a[end];
    a[end] = tem;
    return end;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {2, 1, 4, 7, 5, 9, 6, 8};
    quicksort(a, 0, 7);
    display(a, 8);
}