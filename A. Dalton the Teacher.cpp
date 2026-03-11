#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int unhappy_count = 0;
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        if (p == i) {
            unhappy_count++;
        }
    }
    
    // (c + 1) / 2 handles both even and odd counts perfectly
    cout << (unhappy_count + 1) / 2 << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
