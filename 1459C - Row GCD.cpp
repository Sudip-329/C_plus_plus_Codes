#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
 
using namespace std;
long long get_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    long long G = 0;
    for (int i = 1; i < n; ++i) {
        G = get_gcd(G, abs(a[i] - a[0]));
    }
 
    for (int i = 0; i < m; ++i) {
        long long b;
        cin >> b;
        long long ans = get_gcd(a[0] + b, G);
        cout << ans << (i == m - 1 ? "" : " ");
    }
    cout << "\n";
 
    return 0;
}
