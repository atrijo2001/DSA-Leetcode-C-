class Solution {
public:
    string keypad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    
    void combinations(string input, string output, int i){
        if(input[i] == '\0'){
            result.push_back(output);
            return;
        }
        
        int curr_digit = input[i] - '0';
        
        if(curr_digit==0 or curr_digit==1){
            combinations(input, output, i+1);
        }
            for(int k=0; k<keypad[curr_digit].size(); k++){
                combinations(input, output+keypad[curr_digit][k], i+1);
            }
        return;
    }
    vector<string> letterCombinations(string digits) {
        combinations(digits, "", 0);
        if(result.size() == 1 and result[0] == ""){
            return {};
        }
        return result;
    }
};