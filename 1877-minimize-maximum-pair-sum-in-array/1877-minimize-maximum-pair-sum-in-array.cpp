class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=INT_MIN;
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]>ans)
                ans=nums[i]+nums[j];
            i++;j--;
        }
        return ans;
    }
};