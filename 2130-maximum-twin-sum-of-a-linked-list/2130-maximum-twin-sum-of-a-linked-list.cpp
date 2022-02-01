/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode* curr = head;
        while(curr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        int max_val = INT_MIN;
        for(int i=0; i<=nums.size()/2; i++){
            int sum = nums[i] + nums[nums.size()-1-i];
            max_val = max(max_val, sum);
        }
        return max_val;
    }
};