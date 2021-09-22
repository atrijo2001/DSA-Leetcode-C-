class Solution {
public:
    
    bool isMatching(char a, char b){
        return (a=='(' and b==')');
    }
    int maxm(int a, int b){
        return a>b?a:b;
    }
    int maxDepth(string s) {
        stack<char> st;
        int count = 0;
        for(char x:s){
            if(x=='('){
                st.push(x);
            } else if(x==')'){
                if(isMatching(st.top(), x)==true){
                    st.pop();
                }
            }
            count = maxm(count, st.size());
        }
        return count;
    }
};