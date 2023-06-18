#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    a = 10;
    p= &a;

    cout << a<<endl<<&p<<endl<<p<<endl<<*p<<endl<<&a<<endl;

   *p = 15;
    cout <<"dereferencing =" <<a<< endl ;

    cout << p<<endl<<p+1<<endl;
    cout << "Another operation."<<endl;
    cout << *p << endl<<*(p+1);
}