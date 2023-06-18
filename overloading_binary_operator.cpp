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
    Complex operator + (Complex h) //it is receiving only one argument (h is perameter here)
    {                              // here c 1 is working as function call and c2 is passed as argument
        Complex temp;              //so c1 value come directly as it is an object that is  calling 
        temp.real = real + h.real; //the function by dot operator
        temp.imag = imag + h.imag; //like we say obj c1(5,5); c1.display; auto pass the value in display
        return temp;              //function.that is how here c1 pass the value and c2 passed as argument
    }
    void print() 
    { cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+" c3=c1.operator +(c2)
    c3.print();
}
