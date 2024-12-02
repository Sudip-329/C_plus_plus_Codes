#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer value : ";
    cin>>num;
    cout.setf(ios:: hex, ios:: basefield);
    cout<<"Hexa : "<<num<<endl;

    cout.setf(ios:: oct, ios:: basefield);
    cout<<"OCT : "<<num<<endl;

    cout.setf(ios:: dec, ios:: basefield);
    cout<<"DECI : "<<num<<endl;
}