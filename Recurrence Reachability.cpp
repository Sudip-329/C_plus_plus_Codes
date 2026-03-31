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
        long long P = (1LL << k) - 1;
        long long Q = (1LL << k) - 2; 

        long long min_D = (M - N + Q - 1) / Q;
        
        long long max_D = (M - 1) / P;
        if (min_D <= max_D) {
            long long D = min_D;
            long long x = M - D * P;
            long long y = x + D;
            
            cout << x << " " << y << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
