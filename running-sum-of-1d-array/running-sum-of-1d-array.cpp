class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> cs;
        cs.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            cs.push_back(nums[i]+cs[i-1]);
        }
        return cs;
    }
};