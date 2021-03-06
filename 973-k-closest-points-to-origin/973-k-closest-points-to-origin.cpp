class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>> maxh;
        for(int i=0; i<points.size(); i++){
            double distance = 0.0;
            int x = points[i][0];
            int y = points[i][1];
            vector<int> v{x, y};
            distance = sqrt((x*x)+(y*y));
            maxh.push({distance, v});
            if(maxh.size()>k) maxh.pop();
        }
        vector<vector<int>> ans;
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};