#include<iostream>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    p=&a;
    cout <<"address = "<<p<< "    "<<"value = "<< *p<<endl;

    void *p0;
    p0 = p;
    cout <<"address ="<<p0<<endl;

    //cout <<"address = "<<(*p0);---compilation error.*p0 do not point to any value(cause void pointer);
    cout <<"address = "<<(p+1);
}