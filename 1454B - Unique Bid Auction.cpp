#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        vector<int> index(n + 1, -1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            index[a[i]] = i + 1;
        }

        int answer = -1;

        for (int value = 1; value <= n; value++) {
            if (freq[value] == 1) {
                answer = index[value];
                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
