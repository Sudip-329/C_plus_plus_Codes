#include<stdio.h>
#include<stdlib.h>

void display(int *a,int n){
    printf("Elements in sorted way: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
}

void merge(int a[],int low,int mid,int high){
        int i,j,k,n,*b;
        i=low; j=mid+1; k=low;
        n=high+1;
        b=(int*)malloc(n*sizeof(int));        
        while (i<=mid && j<=high)
        {
            if(a[i]<a[j]){
                b[k]=a[i];
                i++;k++;
            }else{
                b[k]=a[j];
                j++;
                k++;
            }
        }
        while (i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        while (j<=high)
        {
            b[k]=a[j];
            j++;
            k++;
        }
        for ( i = low; i <= high; i++)
        {
            a[i]=b[i];
        }
        
        
}

void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[]={2,1,4,7,5,9,6,8};
    mergesort(a,0,7);
    display(a,8);
}