class Solution {
public:
    int helper(vector<int> &costs, int ind, vector<int> &dp){
        if(ind<0) return 0;
        if(ind == 0 or ind==1) return costs[ind];
        if(dp[ind]!=-1) return dp[ind];
        int left = helper(costs, ind-1, dp) + costs[ind];
        int right = helper(costs, ind-2, dp) +  costs[ind];
        return dp[ind] = min(left, right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1, -1);
        return min(helper(cost, cost.size()-1, dp), helper(cost, cost.size()-2, dp));
    }
};