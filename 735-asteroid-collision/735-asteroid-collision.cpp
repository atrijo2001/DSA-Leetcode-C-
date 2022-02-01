class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         vector<int>v;
        int n=asteroids.size(), i=0;
        while(i!=n){
            if(v.size()==0|| (v.back()<0 && asteroids[i]<0) || (v.back()>0 && asteroids[i]>0)  ){
                v.push_back(asteroids[i]);
                i++;
            }else if(v.back()>0 && asteroids[i]<0){
                if(v.back()>abs(asteroids[i])){
                    i++;
                }else if(v.back()<abs(asteroids[i])){
                    v.pop_back();
                }else{
                    v.pop_back();
                    i++;
                }
            }else{
                v.push_back(asteroids[i]);
                i++;
            }
        }
        return v;
    }
};