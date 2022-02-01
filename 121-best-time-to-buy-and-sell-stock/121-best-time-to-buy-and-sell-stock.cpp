#include<algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minm = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size()-1; i++){
            minm = min(minm, prices[i]);
            profit = max(profit, prices[i+1]-minm);
        }
        return profit;
    }
};