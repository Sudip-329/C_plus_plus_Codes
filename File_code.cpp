#include <fstream>
#include<iostream>
using namespace std;
int main() {
ofstream fout;
char ch;
fout.open("demo.txt");
do{
cin.get(ch);
fout.put(ch);
}
while(ch!=EOF);

fout.close();
cout<<"\nData written successfully...";
return 0;
}
