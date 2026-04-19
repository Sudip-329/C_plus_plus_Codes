#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
        sort(a.begin(), a.end());
 
        double mx = a[n - 1];
        double rest_avg = (double)(sum - a[n - 1]) / (n - 1);
 
        cout << fixed << setprecision(9) << mx + rest_avg << "\n";
    }
 
    return 0;
}
