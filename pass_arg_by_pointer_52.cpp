#include<iostream>
using namespace std;
void Increment ( int *p)
{
    *p = (*p) + 1;
}
int main()
{
    int a;
    a = 10;
    Increment (&a);
    cout<< " New value "<<a ;
}