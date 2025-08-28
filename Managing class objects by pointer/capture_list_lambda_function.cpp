#include <iostream>

int main(){

    //Capture lists
    
    double a{10};
    double b{20};
     
    auto func = [a,b](){ //if we do not pass a,b it will show compiler error;
        std::cout  << "a + b : " << a + b << std::endl;
    };
    func(); //no perameter is passed so need to call it ;
    //Capturing by value
    
    int c{42};
     
    auto func1 = [c](){
        std::cout << "Inner value : " << c << " &inner : " << &c <<  std::endl;
    };
    //func1(); if call here inner value will show;
     
    for(size_t i{1} ; i < 5 ;i++){
        std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
        func1();//to print inner value;
        ++c;
    }

    /*//Capture by reference
     int c1{42};
     
     auto func2 = [&c1](){
         std::cout << "Inner value : " << c1 << " &inner : " <<&c1 <<  std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c1 << " &outer : " << &c1 << std::endl;
         func2();
         ++c1;
     }
     */
    return 0;
}