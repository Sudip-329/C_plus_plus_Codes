#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;

    cout << "Enter two number : " <<endl;
    cin>>num1 >> num2;

    cout << showpoint;
    cout <<fixed;
    cout << setprecision(3);
    float sum = num1 + num2;
    cout <<setw(20)<< "sum is " <<sum<<endl;
 
    cout<< showpoint;
    float sub = num1 - num2;
    cout <<setw(20)<<"subtruction is "<<sub;
}