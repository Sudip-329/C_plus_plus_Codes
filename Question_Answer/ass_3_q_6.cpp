#include<iostream>
#include<math.h>
using namespace std;
float volume(int r2);
float volume(int r4,int h1);
float volume(int l1,int w1,int h3);
int main()
{
    int r1;
    int r3,h;
    int l,w,h2;
    cout<<"Enter the value of redious of a sphere : ";
    cin>>r1;
    cout<<endl<<"Enter the value of redious of a cylinder : ";
    cin>>r3;
    cout<<endl<<"Enter the value of hight of a cylinder : ";
    cin>>h;
    cout<<"Enter the value of length of a cuboid : ";
    cin>>l;
    cout<<endl<<"Enter the value of width of a cuboid : ";
    cin>>w;
    cout<<endl<<"Enter the value of hight of a cuboid : ";
    cin>>h2;
    cout<<"volume of sphere : "<<volume(r1)<<endl;
    cout<<"volume of cylinder : "<<volume(r3,h)<<endl;
    cout<<"volume of cuboid : "<<volume(l,w,h2)<<endl;

}
float volume(int r2)
{
    return (4/3)*(22/7)*pow(r2,3);
}
float volume(int r4,int h1)
{
    return (22/7)*pow(r4,2)*h1;
}
float volume(int l1,int w1,int h3)
{
    return l1*w1*h3;
}