//Series 1+1/2+1/3+1/4+...... 
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    double sum = 0;
    cout << "Enter how many terms : ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        sum = sum + (1.0/i);
    }
    cout << sum;

}