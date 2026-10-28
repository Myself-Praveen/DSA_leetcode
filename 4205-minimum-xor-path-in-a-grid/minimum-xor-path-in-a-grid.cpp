class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> dp(m, vector<bool>(1024, false));
        dp[0][grid[0][0]] = true;

        for (int i = 0; i < n; i++) {
            vector<vector<bool>> next(m, vector<bool>(1024, false));

            for (int j = 0; j < m; j++) {
                for (int k = 0; k < 1024; k++) {
                    if (!dp[j][k]) continue;

                    if (j + 1 < m) {
                        dp[j + 1][k ^ grid[i][j + 1]] = true;
                    }

                    if (i + 1 < n) {
                        next[j][k ^ grid[i + 1][j]] = true;
                    }
                }
            }

            if (i + 1 < n) {
                dp = next;
            }
        }

        for (int k = 0; k < 1024; k++) {
            if (dp[m - 1][k]) return k;
        }

        return -1;
    }
};