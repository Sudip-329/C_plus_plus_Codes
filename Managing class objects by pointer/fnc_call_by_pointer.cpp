#include <iostream>
using namespace std;

void say_age(int* age); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << endl <<"&age : " << &age << std::endl; //23
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << endl << "&age : " << &age <<  std::endl; //24

    return 0;
}


void say_age(int* age){ // Parameter  using pointer.
    ++(*age);   //if not use * it will not increment;
    std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
}