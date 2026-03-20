#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    // The total possible positions is n + 1
    cout << n + 1 << "\n";
    
    return 0;
}
