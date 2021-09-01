class Solution {
public:
    
    vector<int> invert(vector<int> v){
        int i, j;
        if(v.size()%2==0){
             i=(v.size()-1)/2;
             j= i+1;    
        } else{
            i = (v.size()/2)-1;
            j = (v.size()/2) + 1;
        }
        
        while(i>0 or j<v.size()){
            swap(v[i], v[j]);
            i--;
            j++;
        }
        return v;
    }
    vector<int> invertBit(vector<int> v){
        for(int i=0; i<v.size(); i++){
            if(v[i]==0){
                v[i]=1;
            } else{
                v[i]=0;
            }
        }
        return v;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> res;
        for(auto x: image){
            vector<int> k= invert(x);
            k = invertBit(k);
            res.push_back(k);
            // x = invertBit(x);
        }
        return res;
    }
};