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
    void rotateByOne(vector<int> &v){
        int n = v.size();
        int last = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            v[i + 1] = v[i];
        }

        v[0] = last;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> v;
        ListNode* curr = head;
        if(head==NULL){
            return {};
        }
        if(k==0) return head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        if(k>v.size()){
            k = k%v.size();
        }
        for(int i=0; i<k; i++){
            rotateByOne(v);
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        ListNode* res = new ListNode(v[0]);
        ListNode* ans = res;
        for(int i=1; i<v.size(); i++){
            res->next = new ListNode(v[i]);
            res = res->next;
        }
        return ans;
    }
};