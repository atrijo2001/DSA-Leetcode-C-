// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int high = n;
        int low = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isBadVersion(mid)==true and isBadVersion(mid-1)==false){
                return mid;
            } else if(isBadVersion(mid)==true){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
        return 0;
    }
};