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
    int binToInt(vector<int> v){
        int n = v.size()-1;
        int res = 0;
        for(auto x: v){
            res = res + x*pow(2,n);
            n--;
        }
        return res;
    }
    int getDecimalValue(ListNode* head) {
        int resBin = 0;
        vector<int> v;
        ListNode* curr = head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        return binToInt(v);
    }
};