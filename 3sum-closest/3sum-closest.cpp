class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minm = INT_MAX;
        int res = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            int j = i+1, k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<minm){
                    minm = abs(sum-target);
                    res = sum;
                }
                if(sum>target){
                    k--;
                } else{
                    j++;
                }
            }
        }
        return res;
    }
};