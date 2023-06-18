// not working ......................
#include <fstream>
#include<iostream>
using namespace std;
int main() 
{
    ifstream fdatain;
    char ch;
    fdatain.open("getfile.txt");
    cout<<"\n Data in file...";
    while(fdatain)
    {
        fdatain.get(ch);
        cout<<ch;
    }
    fdatain.close();
    return 0;
}
