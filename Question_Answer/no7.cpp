//7-WAP in C++ where the program will find the maximum of 2 number entered by using inline function.

#include<iostream>
using namespace std;

inline int max(int x, int y)
{
    if (x>y)
        return x;
    else 
        return y;
 }

int main()
{
    cout<<"c++ program  to find the maximum of 2 number."<<endl;
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The maximum between two number is "<<max(a,b);
}