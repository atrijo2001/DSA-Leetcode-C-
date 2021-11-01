class Solution {
public:
    int helper(vector<int> &v, int target, int s, int e){
        if(s>e) return -1;
        int m = s + (e-s)/2;
        if(v[m] == target) return m;
        if(v[s]<=v[m]){
            if((target>=v[s]) and (target<=v[m])){
             return helper(v, target, s, m-1);
            }
            else return helper(v, target, m+1, e);
        }
        if(target>=v[m] and target<=v[e]){
            return helper(v, target, m+1, e);
        }
        return helper(v, target, s, m-1);
    }
    int search(vector<int>& nums, int target) {
        return helper(nums, target, 0, nums.size()-1);
    }
};