#include<iostream>
#include<math.h>
using namespace std;


void conv(int a)
{
    int bin;
    int r;
   for(int i=0,j=a;j>=1;i++,j=j/2)
   {
    r=j%2;
    bin=bin+r*pow(10,i);
   }
   cout<<bin;
}
int main()
{
   int num;
   do
   {   
       cout<<"\n";
       cout<<"menu exit condition is '999'";
       cout<<"\nEnter the number = ";
       cin>>num;

       if(num>0)
           conv(num);
   }
   while(num!=999);
}

