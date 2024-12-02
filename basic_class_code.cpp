#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
    public : 
    void getdata(int a,float b);
    void putdata(void)
    {
        cout << "Number : "<<number<<endl;
        cout << "Cost : "<<cost;
    }
};

void item :: getdata(int a,float b )
{
    number = a;
    cost = b;
}

int main()
{
    item x;
    int a;
    float b;
    cout<<"1 st object"<<"\n";
    cout <<"Enter data";
    cin>>a>>b;
    x.getdata(a,b);
    x.putdata();
    return 0;
}
