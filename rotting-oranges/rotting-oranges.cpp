struct node{
  int x, y, time;
    node(int _x,int _y,int _time){
        x = _x;
        y = _y;
        time = _time;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<node> q;
        int cnt = 0, tot=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2) q.push(node(i, j, 0));
                if(grid[i][j]!=0) tot++;
            }
        }
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            cnt = cnt+size;
            while(size--){
                int x = q.front().x;
                int y = q.front().y;
                int time = q.front().time;
                ans = max(ans, time);
                q.pop();
                for(int i=0; i<4; i++){
                    int newX = x + dx[i];
                    int newY = y + dy[i];
                    if(newX<0 or newX>=m or newY<0 or newY>=n or grid[newX][newY]!=1) continue;
                    grid[newX][newY] = 2;
                    q.push(node(newX, newY, time+1));
                }
            }
        }
        if(cnt == tot) return ans;
        return -1;
    }
};