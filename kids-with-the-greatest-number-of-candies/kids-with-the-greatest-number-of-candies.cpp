class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxm = INT_MIN;
        for(auto x:candies){
            maxm = max(maxm, x);
        }
        vector<bool>ans;
        for(auto x:candies){
            bool b = x+extraCandies>=maxm?true:false;
            ans.push_back(b);
        }
        return ans;
    }
};