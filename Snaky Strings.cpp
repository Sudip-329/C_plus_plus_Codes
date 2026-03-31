#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    if (cin >> A) {
        // Check if the string starts or ends with 's'
        if (A.front() == 's' || A.back() == 's') {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
