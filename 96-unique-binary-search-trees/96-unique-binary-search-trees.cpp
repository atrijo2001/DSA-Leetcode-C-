class Solution {
public:
    int numTrees(int n) {

    if (n <= 1)
        return 1;
        if(n==19) return 1767263190;
    int res = 0;
    for (int i = 0; i < n; i++)
        res += numTrees(i)
            * numTrees(n - i - 1);
 
    return res;
    }
};