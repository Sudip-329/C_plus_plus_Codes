
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if ((n % 2 == 0 || n % 5 == 0) && (n % 10 != 0)) {
        cout << 0 << "\n";
    } 
    // Check if the number is a multiple of 10
    else if (n % 10 == 0) {
        cout << 2 << "\n";
    } 
    // Number is not divisible by 2 or 5 (ends in 1, 3, 7, 9)
    else {
        cout << 1 << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for faster execution
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
