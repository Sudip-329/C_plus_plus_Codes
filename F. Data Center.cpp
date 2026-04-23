#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_perimeter = 1e9;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            int perimeter = 2 * (a + b);
            min_perimeter = min(min_perimeter, perimeter);
        }
    }

    cout << min_perimeter << endl;
    return 0;
}
