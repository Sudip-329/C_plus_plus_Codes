#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int X, Y;
    if (cin >> X >> Y) {
        cout << Y + (X - 1) << "\n";
    }
    
    return 0;
}
