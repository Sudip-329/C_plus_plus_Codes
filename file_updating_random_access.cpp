#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class INVENTORY
{
    char name[10];
    int code;
    float cost;
    public: 
    void getdata(void)
    {
        cout<<"Name : ";  cin>>name;
        cout<<"Code : ";  cin>>code;
        cout<<"Cost : ";  cin>>cost;
    }
    void putdata(void)
    {
        cout<<setw(10)<<name<<setw(10)<<code<<setprecision(2)<<setw(10)<<cost<<endl;
    }
};

int main()
{
    INVENTORY item;
    fstream inoutfile;
    inoutfile.open("SRF", ios:: ate | ios::in |ios::out | ios::binary);
    //ate == go to end of the file at opening and binary == open binary file;
    inoutfile.seekg(0,ios::beg);
    cout<<"Current contents of the file is "<<"\n";
    while(inoutfile.read((char*) & item, sizeof item))
    {
        item.putdata();
    }
    inoutfile.clear();

    cout<<"\n Add more item\n";
    item.getdata();
    char ch;
    cin.get(ch);
    inoutfile.write((char *) & item,sizeof item);

    //display the appended file
    inoutfile.seekg(0);
    cout<<"Contents of the appended file \n";
    while(inoutfile.read((char *)& item,sizeof item))
    {
        item.putdata();
    }

    //find number of objects in the file
    int last = inoutfile.tellg();
    int n  = last/sizeof(item);

    cout<<"Number of objects = "<<n<<"\n";
    cout<<"Total bytes in the file = "<<last<<"\n";

    //Modify the details of an item 
    cout<<"Enter objects number to be updated : \n";
    int object;
    cin>>object;
    cin.get(ch);
    int location = (object - 1) * sizeof(item);
    if(inoutfile.eof())
    inoutfile.clear();

    inoutfile.seekp(location);
    cout<<"Enter new values of the object \n";
    item.getdata();
    cin.get(ch);

    inoutfile.write((char *) &item, sizeof item) << flush;

    //show updated file;
    inoutfile.seekg(0);
    cout<<"Contents of the updated file : \n";
    while(inoutfile.read((char *) &item,sizeof item))
    {
        item.putdata();
    }
    inoutfile.close();
    return 0;
}