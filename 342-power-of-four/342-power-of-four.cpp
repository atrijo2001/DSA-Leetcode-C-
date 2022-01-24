class Solution {
public:
    bool isPowerOfFour(int n) {
        long long k = (long long)n;
        int cnt = 0;
        if(k and !(k&k-1)){
            while(k>1){
                k = k>>1;
                cnt++;
            }
            if(cnt%2 == 0){
                    return true;
                } else{
                    return false;
                }
        }
        return false;
    }
};