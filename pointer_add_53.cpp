#include<iostream>
using namespace std;
int main()
{
    int a,b,*x,*y,sum;
    x = &a;
    y = &b;
    cout << "Enter two values to add : ";
    cin >> a>>b;

    sum = *x + *y;
    cout <<"Sum is : "<<sum;
}