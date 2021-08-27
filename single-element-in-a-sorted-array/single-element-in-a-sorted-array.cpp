class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        if(end==0){
            return nums[0];
        }
        if(nums[start]<nums[start+1]){
            return nums[start];
        }
        if(nums[end-1]<nums[end]){
            return nums[end];
        }
        
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]){
                return nums[mid];
            } else if((nums[mid]==nums[mid+1] and mid%2==0) or (nums[mid-1]==nums[mid] and (mid-1)%2==0)){
                start = mid+1;
            } else{
                end = mid-1;
            }
        }
        return -1;
    }
};