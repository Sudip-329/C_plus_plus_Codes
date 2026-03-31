#include <iostream>
using namespace std;

void solve() {
    long long N, M;
    cin >> N >> M;

    if (M <= N) {
        if (M == 1) {
            cout << 1 << " " << 2 << "\n";
        } else {
            cout << M - 1 << " " << M << "\n";
        }
        return;
    }

    for (int k = 2; k <= 30; k++) {
        long long P = (1LL << k) - 1; // 2^k - 1
        long long Q = (1LL << k) - 2; // 2^k - 2

        // Using integer arithmetic to get Ceil and Floor boundaries for D
        // min_D = ceil((M - N) / Q)
        long long min_D = (M - N + Q - 1) / Q;
        
        // max_D = floor((M - 1) / P)
        long long max_D = (M - 1) / P;

        // If a valid integer D exists between our boundaries, we found our pair
        if (min_D <= max_D) {
            long long D = min_D;
            long long x = M - D * P;
            long long y = x + D;
            
            cout << x << " " << y << "\n";
            return;
        }
    }

    // If no valid k produces a valid D, no solution exists
    cout << -1 << "\n";
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
