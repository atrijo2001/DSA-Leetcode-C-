/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* res = NULL;
public:
        void helper(TreeNode* root, int target){
        if(!root) return;
        if(root->val==target) res = root;
        helper(root->left, target);
        helper(root->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        helper(cloned, target->val);
        return res;
    }
};