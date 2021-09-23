class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixSum, suffixSum;
        prefixSum.push_back(height[0]);
        for(int i=1; i<n; i++){
            int el = max(prefixSum[i-1], height[i]);
            prefixSum.push_back(el);
        }
        suffixSum.push_back(height[n-1]);
        int k = 0;
        for(int i=n-2; i>=0; i--){
            int ele = max(suffixSum[k], height[i]);
            suffixSum.push_back(ele);
            k++;
        }
        reverse(suffixSum.begin(), suffixSum.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = ans + ((min(prefixSum[i], suffixSum[i]))-height[i]);
        }
        return ans;
    }
};