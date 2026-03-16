#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd positions are always -1
            cout << -1 << (i == n ? "" : " ");
        } else {
            // Even positions are 3, unless it's the very last element where 2 is sufficient
            if (i == n) {
                cout << 2 << (i == n ? "" : " ");
            } else {
                cout << 3 << (i == n ? "" : " ");
            }
        }
    }
    cout << "\n";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
