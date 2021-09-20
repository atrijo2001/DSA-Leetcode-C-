class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char c;
        for(int i = 0; i<s.length(); i++){
            c = s.at(i);
            if(st.empty()){
                st.push(s[i]);
            } else if (st.top() == '(' && c == ')' || st.top() == '{' && c == '}' || st.top() == '[' && c == ']')
        {
            st.pop();
        }else{
                st.push(c);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};