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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL){
           return NULL;
       } 
        if(head->val == val and head->next == NULL){
            return NULL;
        }
       
        while(head->val == val and head->next!=NULL){
            head = head->next;
        }
        if(head == NULL){
           return NULL;
       } 
        if(head->val == val and head->next == NULL){
            return NULL;
        }
        ListNode* curr = head;
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            } else{
                curr = curr->next;
            }
        }
        cout<<curr->val;
        if(curr->next !=NULL){
            if(curr->next!=NULL and curr->next->val == val){
            curr->next = NULL;
        }
        }
        
        return head;
    }
};