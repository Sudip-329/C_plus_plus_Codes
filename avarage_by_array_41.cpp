//avarage by array;
#include<iostream>
using namespace std;
int main()
{
    float array[20],sum = 0,avg=0;;
    int n,i;
    cout << "Enter how many data : ";
    cin >> n;
    cout << "Enter values for array : " << endl;
    for (i=0; i<n; i++)
    {
        cout << "value  " <<i << " = "; 
        cin>> array[i];
    }

    for(i=0; i<=n; i++)
    {
        sum = sum + array[i];
    }
    avg = sum/n;
    cout <<"Avarage of the numbers : " <<avg;
}