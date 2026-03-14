#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int first_one = -1;
    int last_one = -1;
    
    // Read the array and simultaneously track the first and last '1'
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_one == -1) {
                first_one = i;
            }
            last_one = i; // Continually updates to the rightmost '1'
        }
    }
    
    int min_moves = 0;
    
    // If there are '1's in the array, count the '0's between them
    if (first_one != -1 && last_one != -1) {
        for (int i = first_one; i <= last_one; i++) {
            if (a[i] == 0) {
                min_moves++;
            }
        }
    }
    
    cout << min_moves << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
