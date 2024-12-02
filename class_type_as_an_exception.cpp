#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

class Error
{
    int err_code;
    char *err_desc;
    public:
    Error(int c, char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void display(void)
    {
        cout<<"\n Enter Code : "<<err_code<<"\n"<<"Error description : "<<err_desc;
    }
};

int main()
{
    try
    {
        cout<<"Press any key to throw an exception : ";
        cin.get();
        throw Error(99,"Test exception");  // here throwing a class type as exception.
    }
    catch(Error e)
    {
        cout<<"\nException caught successfully.";
        e.display();
    }
    return 0;
}