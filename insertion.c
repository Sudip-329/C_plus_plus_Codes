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

void insertion(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp=a[i];
        int j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    
}
int main()
{
    int a[] = {2, 1, 4, 7, 5, 9, 6, 8};
    insertion(a,8);
    display(a, 8);
}