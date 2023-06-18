#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file;
  string str,line;
  file.open("f.txt",ios::in); // opening file
  while(file >> str)
  {
      line = line + str;
      line = line + " ";
  }
  file.close(); // closing file
  cout<<"Line written on file : Before reversing"<<endl;
  cout<<line<<endl;
  reverse(line.begin(),line.end()); // reversing the string
  file.open("f.txt",ios::in|ios::out|ios::trunc);
  file<<line<<endl; // writing the reversed string in the file
  cout<<"Line written on file : After reversing"<<endl;
  cout<<line<<endl;
  file.close();
}