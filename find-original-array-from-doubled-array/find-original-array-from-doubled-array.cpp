class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        sort(changed.begin(), changed.end());
        vector<int> v;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[changed[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mp[changed[i]]==0) continue;
                mp[changed[i]]--;
            if(mp[2*changed[i]]){
                mp[2*changed[i]]--;
                v.push_back(changed[i]);
            } else{
                vector<int>inte;
                return inte;
            }
        }
        return v;
    }
};