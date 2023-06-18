//4b-WAP in C++ which will swap the value of 2 variable by using call by reference – (a) using
//alieas (b) using Pointer


#include <iostream> 
using namespace std;
void swap(int *,int *);
int main()
{
	int Var1,Var2;
	cout << "Input two numbers " << endl;
	cin >> Var1;
	cin >> Var2;
	swap(&Var1,&Var2);
	cout << Var1 << " " <<Var2 << endl; 
	return 0;
}
void swap(int *ptr1,int *ptr2)
{
	int Temp;
	Temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = Temp;
	cout << *ptr1 << " "<< *ptr2<< endl;
	return;
}