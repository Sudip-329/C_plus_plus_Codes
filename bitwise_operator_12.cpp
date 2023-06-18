//Bitwise operator.
#include<iostream>
using namespace std;
int main()
{
    int a=32, b= 12, c;

    c = a & b;             //bitwise and
    cout << c << "\n" ;

    c = a | b;             //bitwise or
    cout << c <<endl;

    c = a ^ b;             //bitwise exor
    cout << c ;

    c = a >> 3;
    cout << c << "\n";

    c = a << 3;
    cout << c << endl;

    c = a ;
}