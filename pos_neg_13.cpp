//to see a number positive or negative.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter any number to see it is positive or negative : ";
    cin >> a;

    if (a > 0)
        cout << "The number is positive.";

    else if (a < 0)
        cout << "The number is negative.";

    else if (a == 0)
        cout << " the number is zero.";
}