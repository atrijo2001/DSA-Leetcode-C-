class Solution {
public:
    
    int binary_search(vector<int>nums, int start, int end, int target){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid]>target){
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
        return -1;
    }
    
    int find_peak(vector<int> nums, int start, int end){
        while(start<=end){
            
            int mid = start + (end-start)/2;
            if(mid<end and nums[mid]>nums[mid+1]){
                return mid;
            }
            if(mid>start and nums[mid]<nums[mid-1]){
                return mid-1;
            }
            if(nums[mid]<=nums[start]){
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int peak = find_peak(nums, 0, nums.size()-1);
        if(peak == -1){
            return binary_search(nums, 0, nums.size()-1, target);
        }
        if(nums[peak]==target){
            return peak;
        }
        
        if(target >=nums[0]){
            return binary_search(nums, 0, peak-1, target);
        }else{
            return binary_search(nums, peak+1, nums.size()-1, target); 
        }
    }
};