#include<iostream>
using namespace std;
class student
{
    protected : 
       int roll;
    public : 
       void get_roll(int x)
       {
        roll = x;
       }
       void put_roll(void)
       {
           cout <<"Roll number is : "<< roll<<endl;
       }
};

class test : public student
{
    protected : 
        int mark1,mark2;
    public :
        void get_marks(int a,int b)
        {
            mark1= a;
            mark2 = b;
        }
        void put_marks(void)
        {
            cout << "Mark 1 : "<<mark1<<endl;
            cout << "Mark 2 : "<<mark2<<endl;
        }
};

class sports
{
    protected : 
        int sm;
    public  :
        void get_sport_marks(int p)
        {
            sm = p;
        }
        void put_sport_marks(void)
        {
            cout <<"Sports marks : "<<sm<<endl;
        }
};

class result : public test, public sports 
{
    float total;
    public :
    void display();
};

void result :: display()
{
    total = mark1 + mark2 +sm;
    cout <<"Total marks is : "<<total<<endl;
    put_roll();
    put_marks();
    put_sport_marks();
}

int main()
{
    result s1;
    s1.get_roll(21053329);
    s1.get_marks(89,87);
    s1.get_sport_marks(80);
    s1.display();
}