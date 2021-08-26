class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZeros = 0, countOnes = 0, countTwos = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                countZeros++;
            } else if(nums[i] == 1){
                countOnes++;
            }else{
                countTwos++;
            }
        }
        nums.clear();
        for(int i=0; i<countZeros; i++){
            nums.push_back(0);
        }
        for(int i=0; i<countOnes; i++){
            nums.push_back(1);
        }
        for(int i=0; i<countTwos; i++){
            nums.push_back(2);
        }
    }
};