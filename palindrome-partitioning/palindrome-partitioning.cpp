class Solution {
public:
    bool isPalindrome(string str, int start, int end){
        while(start<=end){
            if(str[start]!=str[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    vector<vector<string>> ans;
    void helper(string s, int index, vector<string>&path){
        if(s.length()==index){
            ans.push_back(path);
            return;
        }
        for(int i=index; i<s.size(); i++){
            if(isPalindrome(s, index, i)){
                path.push_back(s.substr(index, i-index+1));
                helper(s, i+1, path);
                path.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>path;
        helper(s, 0, path);
        return ans;
    }
};