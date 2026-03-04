#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.substr(2, 3) == "nta")
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
