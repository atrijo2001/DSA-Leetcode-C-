class Solution {
public:
    long reverse(int num)
{
    long rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
    bool isPalindrome(int x) {
        
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        if(x<0){
            return false;
        }
        return x==reverse(x) or x==reverse(x)/10;
        return false;
    }
};