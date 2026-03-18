#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Frequency array for gear teeth counts (max value is 100)
    bool seen[101] = {false};
    bool has_duplicate = false;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (seen[a]) {
            has_duplicate = true;
        }
        seen[a] = true;
    }
    
    if (has_duplicate) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
