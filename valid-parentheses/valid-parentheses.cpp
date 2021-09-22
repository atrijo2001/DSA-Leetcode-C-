class Solution {
public:
    bool isMatching(char a, char b){
        return ((a=='(' and b == ')') or (a=='{' and b=='}') or (a=='[' and b==']'));
    }
    bool isValid(string s) {
        stack<char>st;
        for(char x: s){
            if(x=='(' or x=='{' or x=='['){
                st.push(x);
            } else{
                if(st.empty()==true){
                    return false;
                } else if(isMatching(st.top(), x)==false){
                    return false;
                } else{
                    st.pop();
                }
            }
        }
        return st.empty()==true;
    }
};