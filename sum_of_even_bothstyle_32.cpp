//Sum of odd numbers.
#include<iostream>
using namespace std;
int main()
{
    //To see last number .
    int n,sum = 0,i,x=2;
    cout << "Enter the last number : ";
    cin >> n;

    for(i=2; i<=n; i=i+2)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    //To see n number of terms.
    cout << "Enter total terms : ";
    cin >> n;
    sum = 0;
    for(i=1; i<=n; i++)
    {
        sum = sum + x;
        x = x +2;
    }
    cout << sum;
}
