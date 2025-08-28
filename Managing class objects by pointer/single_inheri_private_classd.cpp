#include<iostream>
using namespace std;

class B
{
        int a;
    public: 
        int b;
        void set_ab();
        int get_a(void);
        void show_a(void);
};

class D : private B  //here class B's all public daats are private now;
{
        int c;
    public : 
        void mul(void);
        void display(void);
};

void B :: set_ab(void)
{
    a = 5;b= 10;
}

int B :: get_a()
{
    return a;
}

void B :: show_a(void)
{
    cout << " a value find out from private by get function : "<<a<<endl;
}

void D :: mul(void)
{
    set_ab();  // as b is porivate now so need to get b then multiply;
    c = b *get_a();  
}

void D :: display()
{
    show_a();  // private so get fron fuction
    cout <<"a = "<<get_a()<<endl;  // also work;
    cout <<"b = "<<b <<endl;
    cout <<"c = "<<c<<endl;
}

int main()
{
    D d;
    //d.set_ab();
    d.mul();
   // d.show_a();
    d.display();
    //d.b = 20;
    return 0;
}