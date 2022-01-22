class Solution {
public:
    int helper(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j){
        int m = grid.size();
        int n = grid[0].size();
        if(i==m-1 and j==n-1) return grid[m-1][n-1];
        if(i>m-1 or j>n-1) return 696969;
        if(dp[i][j]!=-1) return dp[i][j];
        int left = helper(grid, dp, i+1, j) + grid[i][j];
        int down = helper(grid, dp, i, j+1) + grid[i][j];
        return dp[i][j] = min(left, down);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(grid, dp, 0, 0);
    }
};