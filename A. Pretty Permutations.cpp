#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> res;

        if(n % 2 == 0) {
            // Even n: swap adjacent pairs
            for(int i = 1; i <= n; i += 2) {
                res.push_back(i + 1);
                res.push_back(i);
            }
        } else {
            // Odd n: swap until last 3
            for(int i = 1; i <= n - 3; i += 2) {
                res.push_back(i + 1);
                res.push_back(i);
            }
            // Handle last 3 elements with rotation
            res.push_back(n - 1);
            res.push_back(n);
            res.push_back(n - 2);
        }

        for(int x : res)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
