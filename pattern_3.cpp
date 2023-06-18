#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cin>>row;

    for(i=0; i<row; i++)
    {
        for (j = 0; j<row-i; j++)
        {
            cout <<" ";
        }
        for (j=0; j<row; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}