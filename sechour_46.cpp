//Sec to hour.
#include<iostream>
using namespace std;
int main()
{
    int hr,temp,min,sec,n;
    cout <<"Enter time in seconds : ";
    cin >> n;

    hr = n/3600;
    temp = n%3600;
    min = temp/60;
    sec = temp%60;

    cout <<n<<" seconds = "<<hr<<" Hour "<<min<<" Minute  "<<sec<<" Seconds";
}