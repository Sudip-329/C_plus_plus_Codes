//It is a c++ which takes a character input to check the character vowel or consonant.
//Auth: Sudip Chakrabarty
//Kalinga Institute of Industrial Technology

#include<iostream>
using namespace std;
int main()
{
    char in;
    cout << "Enter any character : ";
    cin >> in;

    if(in == 'a' || in == 'e' || in == 'i' || in =='o' || in == 'u' || in == 'A'
    || in == 'E' || in == 'I' || in == 'O' || in == 'U')
    /*if dont want to write code for uppercase letter than make the input lowercase
    To do so, use tolower() function*/
        cout << "Entered character is a vowel.";
    else
        cout << "Entered character is a Consonant";

}