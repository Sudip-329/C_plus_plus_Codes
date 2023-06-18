#include <iostream>
using namespace std;

class Check
{
    private:
        int i;
    public:
        Check(): i(0) {  }   //just written in one line; check();{i=0;}

    // Return type is Check
    Check operator ++()
    {
        Check temp;
        ++i;
        temp.i = i;   // here using a return tyhpe ;
        return temp;
    }
    void Display()
    { cout << "i = " << i << endl; }
};


int main()
{
    Check obj, obj1;
    obj.Display();
    obj1.Display();

    ++obj; //obj1 = ++obj;  if write this then bellow two will be 1;

    obj.Display();
    obj1.Display();
    return 0;
}
