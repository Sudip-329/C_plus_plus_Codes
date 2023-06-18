#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outsudipfile("ITEM");
    cout<<"Enter item name : ";
    char name[30];
    cin>>name;
    outsudipfile<<name <<"\n";
    cout<<"Enter item cost : ";
    float cost;
    cin>>cost;

    outsudipfile<<cost<<"\n";
    outsudipfile.close();

    ifstream anyname("ITEM");
    anyname >>name;
    anyname >>cost;
    cout<<"\n";
    cout<<"Ttem name : "<< name<<"\n";
    cout<<"Ttem cost : "<< cost<<"\n";

    anyname.close();
    return 0;
}