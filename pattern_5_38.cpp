//A
//A B
//A B C
//A B C D
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
            cout <<" "<< char(col +64);
        }
        cout <<endl;
    }
}