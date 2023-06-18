//5-Find the area of a Square and Rectangle using the concept of function overloading.

#include<iostream>
using namespace std;
int area(int);
int area(int,int);
int main()
{
        int a,l,h;
        cout<<"Enter the side of a square:";
        cin>>a;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>h;
        cout<<"Area of square is : "<<area(a);
        cout<<"\nArea of rectangle is : "<<area(l,h);
}

int area(int a)
{
    return(a*a);
}
int area(int l,int h)
{
    return(l*h);
}