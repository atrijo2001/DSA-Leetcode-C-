class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         set<vector<int>>res;

    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i<=n-3; i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j<k){
            int current_sum = nums[j] + nums[k];
            if(current_sum == 0-nums[i]){
                res.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            } else if(current_sum>0-nums[i]){
                k--;
            } else{
                j++;
            }
        }
    }
    
    vector<vector<int>>solve(res.begin(),res.end());
   return solve;
    }
};