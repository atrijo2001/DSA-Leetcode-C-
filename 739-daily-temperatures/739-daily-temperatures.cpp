class Solution {
public:
    vector<int>ngr(vector<int> &nums){
        int n = nums.size();
        vector<int> ans(n, 0);
        stack<pair<int,int>> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() and st.top().first<=nums[i]){
                st.pop();
            } 
            if(!st.empty() and st.top().first>nums[i]) ans[i] = st.top().second;
            st.push({nums[i], i});
        }
        return ans;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> nger = ngr(temperatures);
        vector<int> ans;
        for(auto x:nger){
            cout<<x<<" ";
        }
        for(int i=0; i<temperatures.size(); i++){
            if(nger[i]-i>0) ans.push_back(nger[i]-i);
            else ans.push_back(0);
        }
        return ans;
    }
};