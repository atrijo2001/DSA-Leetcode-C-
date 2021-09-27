class Solution {
public:
    vector<vector<int>> subsets;
    vector<vector<int>> res;
    void printSubsets(vector<int> v, int index){
        if(index == v.size()){
                vector<int> inte;
            for(auto i: subsets){
                for(int j:i){
                    inte.push_back(j);
                    sort(inte.begin(), inte.end());
                    cout<<j<<" ";
                }
            }
                res.push_back(inte);
                cout<<endl;

            return;
        }
        subsets.push_back({v[index]});
        printSubsets(v, index+1);
        subsets.pop_back();
        printSubsets(v, index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        printSubsets(nums, 0);
        set<vector<int>>st;
        for(auto p: res){
            st.insert({p});
        }
        vector<vector<int>> result;
        for(auto x:st){
            result.push_back(x);
        }
        return result;
    }
};