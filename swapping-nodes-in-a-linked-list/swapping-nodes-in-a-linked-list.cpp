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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 0;
        ListNode* first = head;
        ListNode* second = head;
        ListNode* curr = head;
        while(first!=NULL and cnt<k-1){
            first = first->next;
            cnt++;
        }
        int len = 0;
        while(curr!=NULL){
            curr = curr->next;
            len++;
        }
        if(k>len){
            return head;
        }
        for(int i=0; i<len-k; i++){
            second = second->next;
        }
        int temp = second->val;
        second->val = first->val;
        first->val = temp;
        cout<<second->val;
        cout<<first->val;
        return head;
    }
};