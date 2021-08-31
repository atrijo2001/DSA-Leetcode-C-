class Solution {
public:
    string defangIPaddr(string address) {
        vector<string> tokens;
        
        stringstream check1(address);
        string intermediate;
        
        while(getline(check1, intermediate, '.')){
            tokens.push_back(intermediate);
        }
        string ans = "";
        for(auto x: tokens){
            cout<<x<<" ";
            ans = ans + x;
            ans = ans + "[.]";
        }
        ans.pop_back();
        ans.pop_back();
        ans.pop_back();
        
        return ans;
    }
};