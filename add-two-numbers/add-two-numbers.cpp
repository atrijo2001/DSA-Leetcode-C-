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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* t = temp;
        ListNode* t1 = temp;       
        int carry = 0;
        while(l1 or l2){
            int val;
            if(l1 and l2){
                val = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            } else if(l1 and !l2){
                val = l1->val + carry;
                l1 = l1->next;   
            } else if(!l1 and l2){
                val = l2->val + carry;
                l2 = l2->next;
            } else{
                val = carry;
            }
            if(val>9){
                val = val%10;
                carry = 1;
            } else{
                carry = 0;
            }
            temp->val = val;
            temp->next = new ListNode(0);
            temp = temp->next;
        }
        cout<<carry;
        if(carry == 1){
            temp->val = 1;
        } else{
            while(t1->next->next!=NULL){
                t1 = t1->next;
            }
            t1->next = NULL;
        }
        return t;
    }
};