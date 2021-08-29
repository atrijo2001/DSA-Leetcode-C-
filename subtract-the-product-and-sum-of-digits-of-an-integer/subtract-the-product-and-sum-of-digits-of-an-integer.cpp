class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        while(n!=0){
            v.push_back(n%10);
            n = n/10;
        }
        int sum = 0, prod = 1;
        for(int i=0; i<v.size(); i++){
            sum = sum + v[i];
            prod = prod * v[i];
            cout<<v[i];
        }
        return prod-sum;
    }
};