#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two number : ";
    cin >> num1 >> num2;
    int sub = num1 - num2;
    cout << "Sub is " <<sub <<endl;

    int mul = num1*num2;
    cout << "Mul is " << mul<<endl;

    double div = (float)num1 / num2;
    cout << "div is " << div<<endl;

    int rem = num1 % num2;
    cout <<"rem is " << rem;
}