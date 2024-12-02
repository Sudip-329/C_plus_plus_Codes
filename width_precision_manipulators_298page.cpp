#include<iostream>
using namespace std;
int main()
{
    float pi = 22.0/7.0;
    int i;
    cout<<"Value of pi : \n";
    for(i =1; i<=10; i++)
    {
        cout.width(i+8);
        cout.precision(i);
        cout<<pi<<"\n";
    }
    return 0;
}