//pass fail.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks to see pass or fail : ";
    cin >> marks;
    if(marks >= 33 && marks <= 100)
    cout << "You are passed.";
    else
    cout << "You are fail.";
}