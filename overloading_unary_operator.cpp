#include <iostream>
using namespace std;
 
class Distance {
    private:
        int feet;
        int inches;
      
    public:
      // required constructors
        Distance() 
        {
            feet = 0;
            inches = 0;
        }

       Distance(int f, int i) 
        {
            feet = f;
            inches = i;
        }

      // method to display distance
        void displayDistance() 
        {
            cout << "F: " << feet << " I:" << inches <<endl;
        }
            // overloaded minus (-) operator
        Distance operator- () 
        {
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
};


int main() {
    Distance D1(11, 10), D2(-5, 11);
    -D1;                     // apply negation D1.operator-();
    D1.displayDistance();    // display D1

    -D2;                     // apply negation D2.operator-();
    D2.displayDistance();    // display D2
    return 0;
}

