class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        int ans=INT_MAX;
        for(int i=n;i>=0;i--){
            int high=i,low=0;
            int tempAns=INT_MAX;
            while(high>=low){
                int mid = (high+low)/2;
                if(pre[i]-pre[mid] >= target){
                    tempAns = i-mid;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            ans=min(ans,tempAns);
        }
        return ans==INT_MAX?0:ans;
    }
};