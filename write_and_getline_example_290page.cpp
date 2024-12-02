//getline and write function 
#include<iostream>
using namespace std;
int main()
{
    int size = 20;
    char city[20];

    cout<<"Enter name : ";
    cin>>city;
    cout<<"City name : "<<city<<"\n\n";

    cout<<"Enter city name again : ";   //it will show nothing as previous city name has
    cin.getline(city,size);              //a null character ,it will be  taken by this 
    cout<<"City name now :"<<city;  // getline function;

    cout<<"\n\nEnter another city name : ";
    cin.getline(city,size);
    cout<<"New city name : "<<city;


    return 0;
}