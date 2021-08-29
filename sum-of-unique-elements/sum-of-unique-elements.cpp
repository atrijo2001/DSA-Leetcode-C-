class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // int sum=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(mp[i]==1){
        //         sum = sum+nums[i];
        //     }
        // }
        // return sum;
        int ans=0;
unordered_map<int,int> m;
int n = nums.size();
for(int i=0;i<n;i++)
{
m[nums[i]]++;
}
for(int i=0;i<n;i++)
{
if(m[nums[i]] == 1)
{
ans+=nums[i];
}
}
return ans;
    }
};