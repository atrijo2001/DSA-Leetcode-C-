class Solution {
public:
    long long sq(int n){
        long long ans = 0;
        while(n){
            ans+= (n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
         int slow = n, fast = n;
        do {
            slow = sq(slow);
            fast = sq(sq(fast));
            if (slow == 1)
                return 1;
        } while (slow != fast);
        return 0;
    }
};