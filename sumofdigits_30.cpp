//Sum of digits.
#include<iostream>
using namespace std;
int main()
{
    int num,sum = 0;
    int temp,rem;
    cout << "Enter any number to see sum of its digits : ";
    cin >> num;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << sum;
}