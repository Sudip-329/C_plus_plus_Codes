#include<iostream>
using namespace std;
int main()
{
    int a,b,rem,gcd;
    int num1,num2;
    cout << "Enter two number to see gcd : ";
    cin >> a >> b;
    num1 = a ;
    num2 =b; //Need to assign in temporary variable,else it will not work. 

    while(num2!=0)
    {
        rem = num1%num2;
        num1 = num2;
        num2=rem;
    }
    gcd = num1;
    cout <<"GCD is = "<< gcd<<endl;
    int lcm;
    lcm = (a*b)/gcd;
    cout <<"LCM is = "<< lcm;
}