#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        while (n--) {
            int x, y;
            cin >> x >> y;
            
            // Only the y-coordinate determines if it's catchable
            if (y >= -1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
