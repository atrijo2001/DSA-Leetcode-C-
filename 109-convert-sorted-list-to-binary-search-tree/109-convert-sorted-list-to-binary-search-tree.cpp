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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* create(vector<int> &a, int l, int r){
        if(l>r) return NULL;
            int mid = (r+l)/2;
            TreeNode* root = new TreeNode(a[mid]);
            root->left = create(a, l, mid-1);
            root->right = create(a, mid+1, r);
            return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
       vector<int> nums;
        ListNode* curr = head;
        while(curr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        return create(nums, 0, nums.size()-1);
    }
};