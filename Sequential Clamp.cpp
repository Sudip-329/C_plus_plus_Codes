#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int Y = 1000000000;

        for (int i = 0; i < N; i++) {
            int A, B;
            cin >> A >> B;

            if (Y < A) Y = A;
            if (Y > B) Y = B;
        }

        cout << Y << "\n";
    }

    return 0;
}
