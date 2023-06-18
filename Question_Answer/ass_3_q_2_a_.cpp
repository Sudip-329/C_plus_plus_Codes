#include<iostream>
using namespace std;
int main()
{
    //USING IF ELSE STATEMENT
    int day;
    cout<<"Enter the day in a number (1-7): ";
    cin>>day;

        if (day<1 || day>7)
        {
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        
        if (day==1)
        {
            cout<<"MONDAY"<<endl;
        }
        else if(day==2)
        {
            cout<<"TUESDAY"<<endl;

        }
        else if (day==3)
        {
            cout<<"WEDNESDAY"<<endl;
        }
        else if(day==4)
        {
            cout<<"THURSDAY"<<endl;
            
        }
        else if (day==5)
        {
            cout<<"FRIDAY"<<endl;
        }
        else if (day==6)
        {
            cout<<"SATURDAY"<<endl;
        }
        else 
        {
            cout<<"SUNDAY"<<endl;
        }
        

        
        






    return 0;
}