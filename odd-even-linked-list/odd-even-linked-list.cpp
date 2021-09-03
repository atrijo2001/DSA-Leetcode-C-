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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* evenStart=NULL, *evenEnd=NULL, *oddStart=NULL, *oddEnd = NULL;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        int indc = 1;
        for(ListNode* curr=head; curr!=NULL; curr=curr->next){
            int val = curr->val;
            
            //Check for even
            if(indc%2==0){
                if(evenStart==NULL){
                    evenStart = curr;
                    evenEnd = evenStart;
                } else{
                    evenEnd->next = curr;
                    evenEnd = evenEnd->next;
                }
            }
            
            //Check for odd
            if(indc%2!=0){
                if(oddStart==NULL){
                    oddStart = curr;
                    oddEnd = oddStart;
                } else{
                    oddEnd->next = curr;
                    oddEnd = oddEnd->next;
                }
            }
            indc++;
        }
        oddEnd->next = evenStart;
        evenEnd->next = NULL;
        return oddStart;
    }
};