class Solution {
public:
    int helper(vector<vector<int>> &obstacleGrid, vector<vector<int>> & dp, int i, int j){
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(i==m and j==n-1) return 1;
        if(i>m-1 or j>n-1) return 0;
        if(obstacleGrid[i][j] == 1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int right = helper(obstacleGrid, dp, i+1, j);
        int down = helper(obstacleGrid, dp, i, j+1);
        return dp[i][j] = right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return helper(obstacleGrid, dp, 0, 0);
        }
};