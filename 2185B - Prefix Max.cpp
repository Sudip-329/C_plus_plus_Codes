#include <bits/stdc++.h>
using namespace std;
 
long long getValue(vector<int>& a) {
    long long sum = 0;
    int currentMax = 0;
    for (int i = 0; i < a.size(); i++) {
        currentMax = max(currentMax, a[i]);
        sum += currentMax;
    }
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        long long ans = getValue(a);
 
        // Try all possible swaps
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
                ans = max(ans, getValue(a));
                swap(a[i], a[j]); // restore
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
