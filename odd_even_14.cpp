//To see odd or even.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to see either it is even or odd";

    cin >> a;
    if(a%2==0)
    cout << "the number is even";

    //else if (a==0)                    should use in first statement.
    //cout << "The number is zero";

    else
    cout << "The number is odd";
}
