#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    
    // Since coin values are between 1 and 100, an array of size 101 is enough to store frequencies.
    vector<int> freq(101, 0);
    int max_pockets = 0;
    
    for (int i = 0; i < n; ++i) {
        int coin;
        cin >> coin;
        freq[coin]++;
        
        // Keep track of the highest frequency seen so far
        max_pockets = max(max_pockets, freq[coin]);
    }
    
    cout << max_pockets << "\n";
    
    return 0;
}
