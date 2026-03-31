#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string A;
    if (cin >> A) {
        if (A.front() == 's' || A.back() == 's') {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
