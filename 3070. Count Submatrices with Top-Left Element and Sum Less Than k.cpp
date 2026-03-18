class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        if (grid.empty() || grid[0].empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                grid[i][j] += grid[i][j - 1];
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int i = 1; i < m; ++i) {
                grid[i][j] += grid[i - 1][j];
            }
        }
        long long K = k;
        long long ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((long long)grid[i][j] <= K) ++ans;
            }
        }
        return static_cast<int>(ans);
    }
};
