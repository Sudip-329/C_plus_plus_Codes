
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if ((n % 2 == 0 || n % 5 == 0) && (n % 10 != 0)) {
        cout << 0 << "\n";
    } 
    else if (n % 10 == 0) {
        cout << 2 << "\n";
    } 
    else {
        cout << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
