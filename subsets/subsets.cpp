class Solution {
public:
    vector<vector<int>> res;
    vector<int>ds;
    void helper(vector<int>nums, int index){
        if(index == nums.size()){
            vector<int> inte;
            for(auto x:ds){
                inte.push_back(x);
                cout<<x<<" ";
            }
            res.push_back(inte);
            cout<<endl;
            return;
        }
        ds.push_back(nums[index]);
        helper(nums, index+1);
        ds.pop_back();
        helper(nums, index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums, 0);
        return res;
    }
};