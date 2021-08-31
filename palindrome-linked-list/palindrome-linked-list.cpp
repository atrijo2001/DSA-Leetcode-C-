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
    ListNode* rev(ListNode* head, ListNode* prev){
        if(head == NULL){
            return prev;
        }
        ListNode* next = head->next;
        head->next = prev;
        return rev(next, head);
    }
    bool isPalindrome(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = rev(slow, NULL);
        fast = head;
        int flag = 0;
        while(slow!=NULL){
            if(slow->val!=fast->val){
                flag++;
            }
            slow = slow->next;
            fast = fast->next;
        }
        if(flag == 0){
            return true;
        }
        return false;
    }
};