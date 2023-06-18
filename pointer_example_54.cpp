#include<iostream>
using namespace std;
int main()
{
    int a [] = {1,2,3,4,5};
    int i;
    for(i=0; i<=4; i++)
    {
        cout << &a[i]<<endl;
        cout << a+i<<endl;
        cout << a[i]<<endl;
        cout << *(a+i)<<endl;
    }
}