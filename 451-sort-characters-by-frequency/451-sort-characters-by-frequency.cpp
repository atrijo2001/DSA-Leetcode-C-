class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        for(int i=0; i<n; i++){
            char ch = s[i];
            mp[ch]++;
        }
        vector<pair<int, char>> v;
        for(auto x: mp){
            v.push_back({x.second, x.first});
        }
        sort(v.begin(), v.end());
        string ans = "";
        for(auto x:v){
            cout<<x.first<<"->"<<x.second<<endl;
            int cnt = x.first;
            while(cnt>0){
                ans += x.second;
                cnt--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};