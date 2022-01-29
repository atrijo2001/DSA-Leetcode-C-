class Solution {
public:
    int helper(vector<vector<int>> &grid, int i, int j1, int j2, int m, int n, vector<vector<vector<int>>>&dp){
        if(j1<0 or j1>=n or j2<0 or j2>=n){
            return -1e8;            
        }
        if(i==m-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi = -1e8;
        for(int p=-1; p<=1; p++){
            for(int q=-1; q<=1; q++){
                int value = 0;
                if(j1==j2){
                    value = grid[i][j1];
                } else{
                    value = grid[i][j1] + grid[i][j2];
                }
                value += helper(grid, i+1, j1+p, j2+q, m, n, dp);
                maxi=max(value, maxi);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return helper(grid, 0, 0, n-1, m, n, dp);
    }
};