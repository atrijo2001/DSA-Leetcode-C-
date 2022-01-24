class Solution {
public:
    int helper(int ind, vector<int> &nums, int n, vector<int> &dp){
        if(ind>=n-1) return 0;
        if(dp[ind]!=99999) return dp[ind];
        for(int i=1; i<=nums[ind]; i++){
            int rec = 1+helper(ind+i, nums, n, dp);
            dp[ind] = min(rec, dp[ind]);
        }
        return dp[ind];
    }
    int help(vector<int>& nums,  vector<int>& dp, int start){
        if(start >= size(nums)-1) return 0;
        if(dp[start] != 99999) return dp[start];
        
        for(int i=1; i<=nums[start]; i++){
            dp[start] = min(dp[start], 1+help(nums, dp, start+i));
        }
        return dp[start];
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), 99999);
        int ans = helper(0,nums,nums.size(), dp);
        return ans;
    }
};