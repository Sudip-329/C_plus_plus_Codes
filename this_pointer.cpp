#include<iostream>
#include<cstring>

using namespace std;
class person
{
    char name[20];
    float age;
    public : 
    person (char *s,float a)
    {
        strcpy (name,s);
        age = a;
    }
    person & person :: greater(person & x)
    {
        if (x.age >= age)
        return x;
        else 
        return *this;
    }
    void display (void)
    {
        cout << "name : "<<name<<endl<<"age : "<<age <<endl;
    }
};

int main()
{
    person p1("John",37.50),p2("Ahmed",29.0),p3("Herbber",40.25);
    person p = p1.greater(p3);
    cout <<"Elder person is : \n";
    p.display();
    p = p1.greater(p2);
    cout << "Elder person is : \n";
    p.display();
    return 0;
}