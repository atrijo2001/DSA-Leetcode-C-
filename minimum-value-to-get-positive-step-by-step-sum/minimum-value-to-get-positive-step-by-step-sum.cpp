class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> pre;
        pre.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            pre.push_back(pre[i-1]+nums[i]);
        }
        int minm = INT_MAX;
        for(int i=0; i<pre.size(); i++){
            minm = min(minm, pre[i]);
        }
        if(minm>0) return 1;
        return abs(minm)+1;
    }
};