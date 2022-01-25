class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int maxi = INT_MIN;
        int flag = 0;
        for(int i=0; i<arr.size(); i++){
            maxi = max(arr[i], maxi);
        }
        if(arr[0]==maxi) return false;
        if(arr[arr.size()-1]==maxi) return false;
        int idx = 0;
        for(int j=0; j<arr.size(); j++){
            if(arr[j]==maxi) break;
            idx++;
        }
        for(int i=0; i<idx-1; i++){
            if(arr[i]>=arr[i+1]) flag++;
        }
        cout<<idx;
        
        for(int i =idx+1; i<arr.size()-1; i++){
            if(arr[i]<=arr[i+1]) flag++;
        }
        return flag>0?false:true;
    }
};