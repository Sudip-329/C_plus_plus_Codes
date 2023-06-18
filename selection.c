#include <stdio.h>
#include <stdlib.h>

void display(int *a, int n)
{
    printf("Elements in sorted way: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
}

void selection(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        int min=i;
        int j=i+1;
    while(j<n){
        if(a[j]<a[min])
            min=j;
        j++;
    }
    int tem = a[min];
    a[min] = a[i];
    a[i] = tem;
    }
    
}
int main()
{
    int a[] = {2, 1, 4, 7, 5, 9, 6, 8};
    selection(a,8);
    display(a, 8);
}