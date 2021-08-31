class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        for(int i=0; i<jewels.size(); i++){
            mp.insert({jewels[i], 0});            
        }
       
        int ans = 0;
        for(auto y:stones){
            if(mp.find(y)!=mp.end()){
                mp[y]++;
            }
        }
        for(auto x: mp){
            ans+= x.second;
        }
        
        return ans;
    }
};