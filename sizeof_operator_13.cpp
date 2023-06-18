//To see special operator like comma,sozeof.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    char name[20];
    double d;
    long double e;

    cout << sizeof a << endl;
    cout << sizeof b << endl;
    cout << sizeof c << endl;
    cout << sizeof name << endl;
    cout << sizeof d << endl;
    cout << sizeof e << endl;

     int sum = (a=10,b=4,sum = a + b);
     cout <<"The sum is : " << sum; 
}