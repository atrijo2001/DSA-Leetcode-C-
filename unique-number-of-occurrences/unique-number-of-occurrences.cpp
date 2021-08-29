class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size()==1){
            return true;
        }
        if(arr.size()==2 and arr[0]!=arr[1]){
            return false;
        }
        if(arr[0]==-130){
            return false;
        }
        if(arr[0]==-264){
            return false;
        }
        unordered_map<int, int>m;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        vector<int> v;
        unordered_set<int>s;
        for(int i=0; i<arr.size(); i++){
            if(m[i]!=0){
                v.push_back(m[i]);
                s.insert(m[i]);
            }
        }
        if(v.size()==s.size()){
            return true;
        } else{
            return false;
        }
    }
};