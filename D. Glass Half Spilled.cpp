#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> a(n), b(n);
    int sum_a = 0;
    int sum_b = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        sum_a += a[i];
        sum_b += b[i];
    }
 
    vector<vector<int>> dp(n + 1, vector<int>(sum_a + 1, -1));
    dp[0][0] = 0;
 
    // Populate the DP table
    for (int i = 0; i < n; ++i) {
        int cap = a[i];
        int water = b[i];
 
        // Iterate backwards to use the 1D space optimization (0/1 knapsack style)
        for (int k = i + 1; k >= 1; --k) {
            for (int c = sum_a; c >= cap; --c) {
                if (dp[k - 1][c - cap] != -1) {
                    dp[k][c] = max(dp[k][c], dp[k - 1][c - cap] + water);
                }
            }
        }
    }
 
    cout << fixed << setprecision(10);
    for (int k = 1; k <= n; ++k) {
        double max_water = 0.0;
        
        for (int c = 0; c <= sum_a; ++c) {
            if (dp[k][c] != -1) {
                double current_B_S = dp[k][c];
                // Apply the derived formula: min(A_S, B_S / 2 + B_tot / 2)
                double possible_water = min((double)c, current_B_S / 2.0 + sum_b / 2.0);
                max_water = max(max_water, possible_water);
            }
        }
        
        cout << max_water << (k == n ? "" : " ");
    }
    cout << "\n";
 
    return 0;
}
