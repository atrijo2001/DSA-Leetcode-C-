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
    vector<int>ngr(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 0);
    stack<int> st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() and st.top()<=nums[i]){
            st.pop();
        } 
        if(!st.empty() and st.top()>nums[i]) ans[i] = st.top();
        st.push(nums[i]);
    }
    return ans;
}
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> ans = ngr(arr);
        return ans;
    }
};