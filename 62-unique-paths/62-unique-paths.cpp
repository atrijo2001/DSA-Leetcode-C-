class Solution {
public:
    int helper(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i>m-1 or j>n-1) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = helper(i+1, j,m,n, dp);
        int right = helper(i, j+1,m,n, dp);
        return dp[i][j] = left + right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp);
    }
};