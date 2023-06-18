#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class INVENTORY
{
    char name[30];
    float cost;
    int code;

public:
    void readdata(void);
    void writedata(void);
};

void INVENTORY ::readdata(void)
{
    cout << "Enter name";
    cin >> name;
    cout << "ēnter code";
    cin >> code;
    cout << "Enter cost : ";
    cin >> cost;
}

void INVENTORY ::writedata(void)
{
    cout << setiosflags(ios::left) << setw(10) << name << setiosflags(ios::right) << setw(10) << code << setprecision(2) << setw(10) << cost << endl;
}

int main()
{
    INVENTORY item[3];
    fstream file;
    file.open("Stock", ios::in | ios::out);

    cout << "Enter details for three iteams  \n";
    for (int i = 0; i < 3; i++)
    {
        item[i].readdata();
        file.write((char *)&item[i], sizeof(item[i]));
    }
    file.seekg(0);

    cout << "\n output \n\n";
    for (int i = 0; i < 3; i++)
    {
        file.read((char *)&item[i], sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}
