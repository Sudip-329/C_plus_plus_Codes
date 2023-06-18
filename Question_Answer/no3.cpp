//3 --WAP in C++ which will swap the value of 2 variable by using call by value.

#include <iostream> 
using namespace std;
void swap(int,int);
int main()
    {
	    int Var1,Var2;
	    cout << "Input two numbers  : " << endl;
	    cin >> Var1;
	    cin >> Var2;
        swap(Var1,Var2);
        return 0;
    }

void swap(int Num1,int Num2)
   {
	   int Temp;
	   Temp = Num1;
	   Num1 = Num2;
	   Num2 = Temp;
       cout << Num1 << "  " <<  Num2<< endl;
   }