//Even or odd by ternary operator.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter any numbers : ";
    cin >> a;

    (a%2==0) ? cout <<a <<"is even" : cout << a<< "is odd";
    //when we dont wnat to use if.
}