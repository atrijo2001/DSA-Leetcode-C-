class Solution {
public:
    void rightRotateByOne(vector<int> &v){
        int n = v.size();
    int last = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        v[i + 1] = v[i];
    }
 
    v[0] = last;
}
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    }
};