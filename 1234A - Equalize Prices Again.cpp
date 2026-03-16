#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;

        long long sum = 0, x;

        for(int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
        }

        x = (sum + n - 1) / n;  // ceiling division
        cout << x << endl;
    }

    return 0;
}
