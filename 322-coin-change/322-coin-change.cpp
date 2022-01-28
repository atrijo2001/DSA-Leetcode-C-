class Solution {
public:
    int helper(vector<int> &coins, int amount, vector<int> &dp){
        if(amount==0) return 0;
        int mini = 65656;
        if(dp[amount]!=-1) return dp[amount];
        for(int i=coins.size()-1; i>=0; i--){
            if(amount-coins[i]>=0){
                mini = min(mini, 1+helper(coins, amount-coins[i], dp));
            }
    }
        return dp[amount]=mini;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(1000000, -1);
        int ans = helper(coins, amount, dp);
        return ans==65656?-1:ans;
    }
};