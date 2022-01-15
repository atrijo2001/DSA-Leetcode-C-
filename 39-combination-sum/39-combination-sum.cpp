class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int> v, int idx, int target, vector<int>&ds){
        if(idx==v.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(v[idx]<=target){
            ds.push_back(v[idx]);
            helper(v, idx, target-v[idx], ds);
            
            ds.pop_back();
        }
        helper(v, idx+1, target, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        helper(candidates, 0, target, ds);
        return ans;
    }
};