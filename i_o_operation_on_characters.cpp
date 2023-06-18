#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char string[80];
    cout<<"Enter a string : ";
    cin>>string;
    int len = strlen(string);
    fstream file; 
    cout<<"Opening the 'Text' file and storing in the string in it.\n\n";
    file.open("TEXT", ios::in | ios::out);
    for(int i =0; i<len; i++)
        file.put(string[i]);

    file.seekg(0);
    char ch;
    cout<<"Reading the file contents: ";
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    return 0;
}