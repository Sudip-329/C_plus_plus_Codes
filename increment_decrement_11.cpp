#include<iostream>
using namespace std;
int main()
{
    int x=6,y;

    y = --x;
    cout << x<<endl;
    cout << y<<endl;

    y = x--;
    cout << y<< endl;
    cout <<x <<endl;

    x=6;
    y = --x;
    cout <<y<<endl<<x;
}