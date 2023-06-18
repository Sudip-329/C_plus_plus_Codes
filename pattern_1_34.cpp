//1
//1 2
//1 2 3 
//1 2 3 4
#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout << "Enter how many lines : ";
    cin >>n;

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=row; col++)
        {
            cout <<" "<< col;
        }
        cout <<endl;
    }
}