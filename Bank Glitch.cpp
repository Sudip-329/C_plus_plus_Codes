#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        
        int trades = A / X;
        int result = A + B + trades * (Y - X);
        
        cout << result << endl;
    }
    
    return 0;
}
