#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        vector<char> twice, once;

        for (auto &p : freq) {
            if (p.second == 2) {
                twice.push_back(p.first);
            } else {
                once.push_back(p.first);
            }
        }

        // First occurrences
        for (char c : twice) {
            cout << c;
        }

        // Single letters
        for (char c : once) {
            cout << c;
        }

        // Second occurrences
        for (char c : twice) {
            cout << c;
        }

        cout << "\n";
    }

    return 0;
}
