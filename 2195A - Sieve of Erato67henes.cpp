#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    bool found67 = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 67) {
            found67 = true;
        }
    }
    
    if (found67) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
