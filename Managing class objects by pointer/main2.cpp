#include <iostream>
#include "cylinder.h"
using namespace std;

int main(){
    Cylinder cylinder1 (10,10);

    cylinder1.volume();

    Cylinder *latest = &cylinder1;
    cout <<"volume(cylinder1)  : "<<(*latest).volume()<<endl;  //Have to put () here ,if not use then it will show an error.
    cout <<"volume(cylinder1)  : "<<latest->volume()<<endl; // it will also work;

    Cylinder * latest2 = new Cylinder(15,17); // creating another one;
    cout << "volume(clylinder2) : " << latest2->volume() << endl;
    cout << "volume(clylinder2) : " << (*latest2).volume()<<endl;
    cout << "base_rad(cylinder2) : " << latest2->get_base_radius() << endl;
    delete latest2;
}