//8-WAP in C++ which will show the use of default argument in a function.

#include <iostream>
using namespace std;
int main()
{
	void func(int, int=24, int=7);

	//func();			    // ERROR ! 1st perameter nedeed

	//func(2);			    // displays 2 24 7
 
	func(10,13);			// displays 10 13 7	

	//func(20,200,2000);    // displays 20 200 2000
	return 0;
}
 
void func(int a,int b,int c)
{
	cout << a << "   " << b << "   " << c << endl;
}