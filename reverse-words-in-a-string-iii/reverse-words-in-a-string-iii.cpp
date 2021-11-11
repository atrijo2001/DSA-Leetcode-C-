class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string> tokens;
        // stringstream class check1
        stringstream check1(s);
      
        string intermediate;
      
        while(getline(check1, intermediate, ' ')){
            tokens.push_back(intermediate);
        }
        for(string s: tokens){
            reverse(s.begin(), s.end());
            ans = ans+s;
            ans = ans+ " ";
        }
        if (!ans.empty()) {
           ans.erase(ans.size() - 1);
        }
        return ans;
    }
};