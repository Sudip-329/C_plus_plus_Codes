// 153 = 1^3 + 5^3 + 3^3(armstrong number)370,371,407;
#include<iostream>
using namespace std;

int main()
{
    int num,temp,sum =0,rem;
    cout << "Enter any number to check armstrong or not : "<<endl;
    cin >> num;
    temp = num;
    while(temp != 0 )
    {
        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp = temp / 10 ;
    }

    if(sum == num)
    {
        cout<<num<<" is a armdtrong number.";
    }
    else{
        cout<<num<<" Not armstrong";
    }
    return 0;
    }