class Solution {
public:
    int arrangeCoins(int sum) {
        // sum = n(n+1)/2
        //2*sum = n^2 + n => n^2 + n - 2*sum = 0
        //D = 1 + 8*sum; b = 1, a=1, c = 2*sum
        long long x1 = 0, x2 = 0;
        if(sum>0){
            x1 = (-1 + sqrt(1+(long)8*sum))/2;
            x2 = (-1 + sqrt(1+(long)8*sum))/2;
        }
        return x1;
    }
};