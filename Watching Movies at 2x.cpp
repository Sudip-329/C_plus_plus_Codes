#include <iostream>

using namespace std;

int main() {
    int X, Y;
    if (cin >> X >> Y) {
        // Option 1: Direct logic
        // int timeSpent = (Y / 2) + (X - Y);
        
        // Option 2: Simplified logic
        int timeSpent = X - (Y / 2);
        
        cout << timeSpent << endl;
    }
    return 0;
}
