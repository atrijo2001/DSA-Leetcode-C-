class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;
        for(auto x:nums1){
            s1.insert(x);
        }
        for(auto x:nums2){
            s2.insert(x);
        }
        vector<int> res;
        if(s1.size()>s2.size()){
            for(auto x: s1){
                if(s2.find(x)!=s2.end()){
                    res.push_back(x);
                }
            }
        } else{
            for(auto x: s2){
                if(s1.find(x)!=s1.end()){
                    res.push_back(x);
                }
            }
        }
        return res;
    }
};