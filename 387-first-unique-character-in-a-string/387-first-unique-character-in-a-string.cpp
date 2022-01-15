class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        queue<char> q;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        char chh;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(mp[ch]==1){
                q.push(ch);
                chh = ch;
            }
        }
        cout<<q.front();
        for(int i=0; i<s.length(); i++){
            if(s[i]==q.front()) return i;
        }
        return -1;
    }
};