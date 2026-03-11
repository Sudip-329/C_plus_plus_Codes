#include <iostream>
using namespace std;

void solve() {
    int A, B, C;
    cin >> A >> B >> C;
    
    // Check our two derived conditions
    if (C % 3 == 0 && B == (2 * A) + (C / 3)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
