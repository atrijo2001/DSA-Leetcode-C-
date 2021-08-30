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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        // if(n==1){
        //     ListNode* temp = head;
        //     if(temp->next==NULL){
        //         return NULL;
        //     }
        //     while(temp!=NULL and temp->next->next!=NULL){
        //         temp = temp->next;
        //     }
        //     temp->next = NULL;
        //     return head;
        // }
        for(int i=0; i<n; i++){
            if(fast==NULL){
                return NULL;
            }
            fast = fast->next;
            
        }
        if(fast==NULL){
            return head->next;
        }
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        cout<<slow->val;
        slow->next = slow->next->next;
        return head;
    }
};