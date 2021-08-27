class Solution {
public:
    int binary_search(vector<int> nums, int target, int start, int end){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            } else if(nums[mid]>target){
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, nums.size()-1);
    }
};