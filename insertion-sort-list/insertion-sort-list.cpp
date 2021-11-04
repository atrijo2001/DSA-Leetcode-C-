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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> temp;
        ListNode* curr = head;
        while(curr){
            temp.push_back(curr->val);
            curr = curr->next;
        }
        sort(temp.begin(), temp.end());
        ListNode* p = head;
        int k = 0;
        while(p!=NULL){
            p->val = (temp[k++]);
            p = p->next;
        }
        return head;
    }
};