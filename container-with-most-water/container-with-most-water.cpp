class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 1;
        int max_area = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int width = (j-i);
            area = min(height[j], height[i])*width;
            cout<<area<<" ";
            max_area = max(area, max_area);
            if(j-i<=1) break;
            if(height[i]>height[j]) j--;
            else i++;
        }
        return max_area;
    }
};