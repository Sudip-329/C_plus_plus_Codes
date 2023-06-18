// overloading operator is used to add user defined data types ....for basic f=direct + - * /
#include<iostream>
using namespace std;
 
class Complex 
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
        {
            real = r;
            imag = i;
        }
    friend Complex operator + (Complex ,Complex);  //in friend function overloading need to pass both the
    void print()                                   //obj,but in member function one obj calls the operator
    { cout << real << " + i" << imag << endl; }    //function and other object is passed as argument;
};

Complex operator + (Complex x,Complex y)
{
    Complex temp;
    temp.real = x.real+y.real;
    temp.imag = x.imag + y.imag;
    return temp;
}


int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+" c3=operator +(c1,c2)
    c3.print();
}
