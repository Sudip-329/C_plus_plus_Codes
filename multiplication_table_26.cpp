#include<iostream>
using namespace std;
int main()
{
    int n,i,result;
    cout <<"Enter any number to see multiplication table : ";
    cin >> n;

    for(i=1; i<=10; i++)
    {
        result = i * n;
        //cout << n << "*" << i << "=" << result <<endl; 
        cout << n << "X" << i << "=" << (i*n) <<endl;
    }
}