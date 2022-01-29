class Solution {
    vector<int> nseli(vector<int> &nums){
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<pair<int, int>> st;
        for(int i=0; i<n; i++){
            while(!st.empty() and st.top().first>=nums[i]) st.pop();
            if(!st.empty() and st.top().first<nums[i]) ans[i] = st.top().second;
            st.push({nums[i], i});
        }
        return ans;
    }
    vector<int> nseri(vector<int> &nums){
        int n = nums.size();
        vector<int> ans(n, n);
        stack<pair<int, int>> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() and st.top().first>=nums[i]) st.pop();
            if(!st.empty() and st.top().first<nums[i]) ans[i] = st.top().second;
            st.push({nums[i], i});
        }
        return ans;
    }
    int mah(vector<int>& heights) {
        vector<int> right = nseri(heights);
        vector<int> left = nseli(heights);
        vector<int> width;
        int max_area = INT_MIN;
        for(int i=0; i<heights.size(); i++){
            width.push_back(right[i]-left[i]-1);
        }
        for(int i=0; i<heights.size(); i++){
            int area = heights[i]*width[i];
            max_area = max(area, max_area);
        }
        return max_area;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = INT_MIN;
        vector<int> row(m, 0);
        for(int i=0; i<m; i++){
            row[i]=matrix[0][i]-'0';
        }
        for(auto x: row) cout<<x<<" ";
        ans = max(mah(row), ans);
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]-'0'==0) row[j]=0;
                else row[j] += 1;
            }
            int mh = mah(row);
            ans = max(mh, ans);
        }
        return ans;
    }
};