class Solution {
public:
    int pivot(vector<int> nums){
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid<end and nums[mid]>nums[mid+1]){
                return mid;
            } else if(mid>start and nums[mid]<nums[mid-1]){
                return mid-1;
            }
            if(nums[mid]>=nums[start]){
                start = mid+1;
            } else{
                end = mid-1;
            }
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        int peak = pivot(nums);
        if(peak == -1){
            return nums[0];
        }
        return nums[peak+1];
    }
};