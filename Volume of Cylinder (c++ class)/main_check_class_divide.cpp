#include <iostream>
#include "cylinder.h"  //it is including the cylinder class file;

int main(){  //normal main fucntion;
    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    
    return 0;
}