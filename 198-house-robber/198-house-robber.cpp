class Solution {
public:
    int helper(int ind, vector<int>&arr, vector<int> &dp){
        if(ind == 0) return arr[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick = arr[ind] + helper(ind-2, arr, dp);
        int not_pick = helper(ind-1, arr, dp);
        return dp[ind] = max(pick, not_pick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
       return helper(nums.size()-1, nums, dp); 
    }
};