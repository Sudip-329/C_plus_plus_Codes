//Fibonakki series __ 0 1 1 2 3 5 8 13 21................
#include<iostream>
using namespace std;
int main()
{
    int fibo,n,n1=0,n2=1,count=0;
    cout << "Enter how many terms : ";
    cin>>n;
    while(count<n)
    {
    if (count <=1)
    {
        fibo = count;
    }
    else
    {
        fibo = n1 + n2;
        n1 =n2;
        n2 = fibo;
    }
    cout << " " <<fibo;
    count ++;
    }
}