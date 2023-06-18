#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
 
class emp
{
    char name[30];
    int ecode;
    public:
        emp()
        {
        }
        emp(char *n,int c)
        {
            strcpy (name,n);
            ecode = c;
        }
};

int main()
{
    emp e[4];
    /*e[0] = emp("amit ", 1);  inside for loop direct data 
    e[1] = emp("sudip", 2);
    e[2] = emp("pappu", 3);
    e[3] = emp("putak", 4);*/

    fstream file;
    file.open("Employee.dat",ios :: in | ios:: out);

    int i;
    for(int i =0; i<4; i++)
    {
        char data[30];      //taking user input from keyboard 
        cin>>data;
        e[i] = emp(data,i+1);
        file.write((char *) &e[i], sizeof(e[i]));
    }
        file.seekg(0,ios:: end);
        int end = file.tellg();

        cout<<"NUmber of objects stored in the file : "<<end/
        sizeof(emp);
        return 0;
}
