#include<iostream>
using namespace std;
class sample 
{
int a;
int b;
public:
void setvalue()
{
    a = 25, b= 40;
}
friend float mean(sample x);
};
float mean (sample x)
{
    return float (x.a +x.b)/2.0;
}
int main()
{
    sample p;
    p.setvalue();//calling to get the value of a and b;
    cout << "Mean value = "<<mean(p)<<"\n";
    return 0;
}