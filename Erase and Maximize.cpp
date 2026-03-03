#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, S;
        cin >> N >> S;

        long long answer = 6LL * N - max(0LL, S - 5LL * N);

        cout << answer << "\n";
    }

    return 0;
}
