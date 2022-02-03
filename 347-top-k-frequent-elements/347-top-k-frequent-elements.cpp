class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
            vector<pair<int, int>> v;
            for(auto x: mp){
                v.push_back({x.second, x.first});
            }
            for(int i=0; i<v.size(); i++){
                minh.push({v[i].first, v[i].second});
                if(minh.size()>k) minh.pop();
            }
        vector<int> ans;
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        return ans;
    }
};