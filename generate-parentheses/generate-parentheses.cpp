class Solution {
public:
    vector<string> res1;
    void parenthesis(string output, int i, int n, int countOpen, int countClose){
        if(i == 2*n){
            cout<<output;
            res1.push_back(output);
            return;
        }
        if(n>countOpen){
            parenthesis(output+"(", i+1, n, countOpen+1, countClose);
        }
        if(countClose<countOpen){
            parenthesis(output+")", i+1, n, countOpen, countClose+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res{"()"};
        parenthesis("", 0, n, 0, 0);
        return res1;
    }
};