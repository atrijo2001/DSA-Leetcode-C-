class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()>1){
            if(isupper(word[0]) and isupper(word[1])){
                for(int i=0; i<word.length(); i++){
                    if(islower(word[i])) return false;
                }
                return true;
            }
        }
            if(isupper(word[0])){
                for(int i=1; i<word.length(); i++){
                    if(isupper(word[i])) return false;
                }
                return true;
            } else{
                for(int i=1; i<word.length(); i++){
                    if(isupper(word[i])) return false;
                }
                return true;
            }
        return false;
    }
};